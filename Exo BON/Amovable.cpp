#include <iostream>

#include "AMovable.h"

AMovable::AMovable(Vector2 _direction, float _speed) : direction(_direction), speed(_speed) {}

void AMovable::SetDirection(Vector2 _direction) 
{
	this->direction = _direction;
}

void AMovable::SetSpeed(float _speed) 
{
	this->speed = _speed;
}


Vector2 Move(Vector2 _position, Vector2 _direction, float _speed)
{
	_position.SetX(_position.GetX() + _direction.GetX() * _speed);
	_position.SetY(_position.GetY() + _direction.GetY() * _speed);

	return _position;
}


