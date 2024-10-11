#pragma once

#ifndef ENTITY_H__
#define ENTITY_H__

#include "Vector2.h"

class Entity
{
private:
	Vector2 position;

public:
	Entity();
	Entity(Vector2 _position);

	virtual Vector2 GetPosition() const;
	virtual void SetPosition(Vector2 _position);
	
};
#endif // 
