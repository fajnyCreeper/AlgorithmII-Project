#pragma once
#include <string>
#include <sstream>

class Box
{
public:
	int height, width, length;

	Box(int, int, int);
	std::string ToString();
};

