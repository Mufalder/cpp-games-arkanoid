#pragma once
#include <math.h>
#include "GameObject.h"
#include "GameSettings.h"

class Engine
{
public:
	static Engine& getInstance()
	{
		static Engine instance;
		return instance;
	}

private:
	Engine();

	sf::RenderWindow window;

	void update(float delta);
	void draw();

public:
	Engine(Engine const&) = delete;
	void operator=(Engine const&) = delete;

	static float time;

	void start();
};