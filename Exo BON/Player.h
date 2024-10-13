#pragma once

#ifndef PLAYER_H__
#define PLAYER_H__

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"


class Player : public Entity, public Alive, public AMovable, public IAttacker
{
public:
	Player();
	Player(float _x, float _y, float _maxHp, Vector2 _direction, float _speed);

	void TakeDamage(float _damage) override;
	Vector2 Move(Vector2 _position, Vector2 _directon, float speed) override;
	void Attack(Alive* _alive, const float _damage = 10) override;

};

#endif // !MOB_H__
