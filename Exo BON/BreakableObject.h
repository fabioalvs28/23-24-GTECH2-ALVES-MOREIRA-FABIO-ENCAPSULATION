#pragma once

#ifndef BREAKABLEOBJECT_H__
#define BREAKABLEOBJECT_H__

#include "Entity.h"
#include "Alive.h"

class BreakableObject : public Entity, public Alive

{
public:
	BreakableObject();
	virtual void SetPosBreakableObject(float _x, float _y);
	virtual void SetHp(float _maxHp, float _currentHp);
	void TakeDamage(float _damage) override;
};

#endif // 
