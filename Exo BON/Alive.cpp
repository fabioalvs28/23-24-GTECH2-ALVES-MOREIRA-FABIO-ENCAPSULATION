#include <iostream>
#include "Alive.h"

Alive::Alive() : currentHp(0), maxHp(0) {};
Alive::Alive(float _maxHp) : maxHp(_maxHp), currentHp(_maxHp) {};

float Alive::GetMaxHp() const
{
	return this->maxHp;
}

float Alive::GetCurrentHp() const
{
	return this->currentHp;
}

void Alive::TakeDamage(float _damage)
{
	this->currentHp = this->currentHp - _damage;
}