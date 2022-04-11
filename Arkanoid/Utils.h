#pragma once
#include <string>

class Utils
{
private:
	static float pi;
	static std::string tags[];

public:
	static float PI();
	static std::string* Tags();

	static float deg2Rad(float deg);
	
};

