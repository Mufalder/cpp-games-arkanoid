#pragma once
#include <vector>
#include <algorithm>
#include <SFML/Graphics.hpp>

//Basic header for all game objects
class GameObject
{
public:
	GameObject()
	{
		gameObjects.push_back(this);
	}

	~GameObject()
	{
		std::vector<GameObject*>::iterator pos = std::find(gameObjects.begin(), gameObjects.end(), this);
		if (pos != gameObjects.end())
			gameObjects.erase(pos);
	}

	virtual void update(float delta) = 0;
	virtual void draw(sf::RenderWindow* window) = 0;

	static std::vector<GameObject*> gameObjects;
};