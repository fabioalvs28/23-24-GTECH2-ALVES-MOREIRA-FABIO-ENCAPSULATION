#include <iostream>

#include "Mob.h"

Mob::Mob() {};

Mob::Mob(float _x, float _y, float _maxHp, Vector2 _direction, float _speed) : Entity(Vector2(_x , _y)), Alive(_maxHp), AMovable(_direction, _speed) 
{

	std::cout << "Mob just created at x= " << _x << " and y= " << _y << " with " << _maxHp << " HP with direction x= " << _direction.GetX() << " and y= " << _direction.GetY() << " with a speed of " << _speed << std::endl;

};

void Mob::TakeDamage(float _damage)
{

	this->Alive::TakeDamage(_damage);
	if (this->Alive::GetCurrentHp() <= 0)
	{
		std::cout << "Mob just died skill issue" << std::endl;
	}
	else
	{
		std::cout << "Mob survived" << std::endl;
	}

}

Vector2 Mob::Move(Vector2 _position, Vector2 _direction, float _speed)
{
    this->SetPosition(Vector2(this->AMovable::Move(_position, _direction, _speed)));
    std::cout << "Mob moved to x= " << this->GetPosition().GetX() << ", y= " << this->GetPosition().GetY() << std::endl;
    return this->GetPosition();
}