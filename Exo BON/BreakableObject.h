#pragma once

#ifndef BREAKABLEOBJECT_H__
#define BREAKABLEOBJECT_H__

#include "Entity.h"
#include "Alive.h"

class BreakableObject : public Entity, public Alive

{
public:
	BreakableObject();
	BreakableObject(float _x, float _y, float _maxHp);
	void TakeDamage(float _damage) override;
};

#endif // 
