#include <iostream>
#include "BreakableObject.h"

BreakableObject::BreakableObject() {};

BreakableObject::BreakableObject(float _x, float _y, float _maxHp) : Entity(Vector2(_x, _y)) , Alive(_maxHp)
{
	std::cout << "Breakable Object just created at x = " << _x << " and y = " << _y << " with " << _maxHp << " HP " << std::endl;;

};

void BreakableObject::TakeDamage(float _damage) 
{
	this->Alive::TakeDamage(_damage);
	std::cout << "Breakable Object just broke" << std::endl;
}