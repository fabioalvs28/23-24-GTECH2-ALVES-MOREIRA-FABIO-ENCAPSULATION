#pragma once

#ifndef AMOVABLE_H__
#define AMOVABLE_H__

#include "Vector2.h"

class AMovable
{
private:
	Vector2 direction;
	float speed;

public:
	AMovable(Vector2 _direction, float _speed);
	
	virtual void SetSpeed(float _speed) = 0;
	virtual void SetDirection(Vector2 _direction) = 0;
	virtual Vector2 Move(Vector2 _position, Vector2 _direction, float _speed) = 0;
};
#endif 

