#include "Box.h"

Box::Box(int height, int width, int length)
{
	this->height = height;
	this->width = width;
	this->length = length;
}

std::string Box::ToString()
{
	std::stringstream stream;
	stream << this->width << " x " << this->length << " x " << this->height;
	
	return stream.str();
}