#include <iostream>
#include "StaticObject.h"

StaticObject::StaticObject() {};

StaticObject::StaticObject(float _x, float _y) : Entity(Vector2(_x, _y)) 
{
	std::cout << "Static Object just created at x = " << _x << " and y = " << _y << std::endl;
};

