#include "Engine.h"

float Engine::time = 0;

std::vector<GameObject*> GameObject::gameObjects;

//Call update method on all game objects
void Engine::update(float delta)
{
	std::vector<GameObject*>::iterator it;
	for (it = GameObject::gameObjects.begin(); it != GameObject::gameObjects.end(); ++it)
	{
		(*it)->update(delta);
	}
}

//Call draw method on all game objects
void Engine::draw()
{
	window.clear();
	std::vector<GameObject*>::iterator it;
	for (it = GameObject::gameObjects.begin(); it != GameObject::gameObjects.end(); ++it)
	{
		(*it)->draw(&window);
	}
	window.display();
}

//Start the engine
void Engine::start()
{
	std::srand(std::time(nullptr));

	sf::Clock clock;

	while (window.isOpen())
	{
		//Calculate frame time and overall run time
		sf::Time dt = clock.restart();
		float delta = dt.asSeconds();
		Engine::time += delta;

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		update(delta);
		draw();
	}
}

Engine::Engine()
{
	sf::ContextSettings settings;
	settings.antialiasingLevel = GameSettings::getAntialiasingLevel();
	window.create(sf::VideoMode(GameSettings::getWindowWidth(), GameSettings::getWindowHeight()), GameSettings::getGameName(), sf::Style::Default, settings);
}