#include "Engine.h"
#include "GUI.h"

//Main class. Everything starts here.
int main()
{
	//Getting engine instance
	Engine& engine = Engine::getInstance();

	//Creating game objects
	GUI* gui = new GUI();
	//Starting engine
	engine.start();

	return 0;
}