#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(float x, float y, float width, float height) :
	x(x), y(y), width(width), height(height) {}

void Rectangle::SetPos(float x, float y) {
	this->x = x;
	this->y = y;
}

void Rectangle::SetDim(float width, float height) {
	this->width = width;
	this->height = height;
}

double Rectangle::GetArea() const{
	return width * height;
}

void Rectangle::Print() const {
	std::cout << "(" << x << "|" << y << ") - (" << width << "|" << height << ") - Area: " << GetArea() << std::endl;
}