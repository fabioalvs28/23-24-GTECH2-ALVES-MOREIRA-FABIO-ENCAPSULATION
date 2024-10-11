#include <iostream>
#include "BreakableObject.h"

BreakableObject::BreakableObject() {};

void BreakableObject::SetPosBreakableObject(float _x, float _y)
{
	Vector2 temp(_x, _y);
	this->Entity::SetPosition(temp);
}

void BreakableObject::SetHp(float _maxHp, float _currentHp)
{
	this->Alive::Alive(_maxHp, _currentHp);
}

void BreakableObject::TakeDamage(float _damage) 
{
	this->Alive::TakeDamage(_damage);
	std::cout << "Breakable Object just broke" << std::endl;
}