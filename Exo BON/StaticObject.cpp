#include <iostream>
#include "StaticObject.h"

StaticObject::StaticObject() {};

void StaticObject::SetPosStaticObject(float _x, float _y)
{

	this->Entity::GetPosition().SetX(_x);
	this->Entity::GetPosition().SetY(_y);


	std::cout << "Static Object just created at x = " << this->GetPosition().GetX() << " and y = " << this->GetPosition().GetY();

}