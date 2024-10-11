#pragma once

#ifndef IATTACKER_H__
#define IATTACKER_H__

#include "Alive.h"

class IAttacker 
{
public:
	IAttacker();
	virtual void Attack(Alive* _alive, float _damage) = 0;
};
#endif // !IATTACKER_H__

