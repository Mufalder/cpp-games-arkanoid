#pragma once
#include <string>

class GameSettings
{
private:
	static std::string gameName;
	static int windowWidth;
	static int windowHeight;
	static int antialiasingLevel;
public:
	static std::string getGameName() { return gameName; }
	static int getWindowWidth() { return windowWidth; }
	static int getWindowHeight() { return windowHeight; }
	static int getAntialiasingLevel() { return antialiasingLevel; }
};