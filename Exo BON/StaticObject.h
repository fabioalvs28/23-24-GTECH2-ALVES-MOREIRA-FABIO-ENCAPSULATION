#pragma once

#ifndef STATICOBJECT_H__
#define STATICOBJECT_H__

#include "Entity.h"

class StaticObject : public Entity 
{
public:
	StaticObject();
	StaticObject(float _x, float _y);
};
#endif // !STATICOBJECT_H__

