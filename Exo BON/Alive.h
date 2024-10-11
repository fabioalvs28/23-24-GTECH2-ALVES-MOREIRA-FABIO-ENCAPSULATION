#pragma once

#ifndef ALIVE_H__
#define ALIVE_H__

class Alive
{
private:
	float maxHp;
	float currentHp;

public:
	Alive();
	Alive(float _maxHp, float _currentHp);

	virtual float GetMaxHp() const;
	virtual float GetCurrentHp() const;
	virtual void TakeDamage(float _damage);
};
#endif