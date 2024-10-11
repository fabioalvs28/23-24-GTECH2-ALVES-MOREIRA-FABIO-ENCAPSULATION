#include <iostream>
#include "IAttacker.h"

IAttacker::IAttacker() {};

void IAttacker::Attack(Alive* _Alive, float _damage)
{
	_Alive->TakeDamage(_damage);
}