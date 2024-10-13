#include <iostream>

#include "AMovable.h"

AMovable::AMovable() {};

AMovable::AMovable(Vector2 _direction, float _speed) : direction(_direction), speed(_speed) {}

void AMovable::SetDirection(Vector2 _direction) 
{
	this->direction = _direction;
}

void AMovable::SetSpeed(float _speed) 
{
	this->speed = _speed;
}

Vector2 AMovable::GetDirection()
{
	return this->direction;
}

float AMovable::GetSpeed()
{
	return this->speed;
}

Vector2 AMovable::Move(Vector2 _position, Vector2 _direction, float _speed)
{
	_position.SetX(_position.GetX() + _direction.GetX() * _speed);
	_position.SetY(_position.GetY() + _direction.GetY() * _speed);

	return _position;
}


