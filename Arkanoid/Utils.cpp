#include "Utils.h"

float Utils::pi = 3.14f;
std::string tags[] = { "Default", "Player", "Enemy", "Damage" };

float Utils::deg2Rad(float deg)
{
	return deg * pi / 180.0f;
}

float Utils::PI()
{
	return pi;
}

std::string* Tags()
{
	return tags;
}