#pragma once

#ifndef MOB_H__
#define MOB_H__

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"


class Mob : public Entity, public Alive, public AMovable
{
public:
	Mob();
	Mob(float _x, float _y, float _maxHp, Vector2 _direction, float _speed);

	void TakeDamage(float _damage) override;
	Vector2 Move(Vector2 _position, Vector2 _directon, float speed) override;
};

#endif // !MOB_H__
