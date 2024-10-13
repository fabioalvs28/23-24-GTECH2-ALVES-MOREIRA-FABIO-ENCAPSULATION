#pragma once

#ifndef WORLD_H__
#define WORLD_H__

#include<vector>
#include "BreakableObject.h"
#include "StaticObject.h"
#include "Mob.h"
#include "Player.h"

class World : public Entity, public StaticObject, public BreakableObject, public Mob, public Player
{
private:
	std::vector<Entity*> entities;

public:
	World();
	void Init();
	void Step();


}; 

#endif // !WORLD_H__
