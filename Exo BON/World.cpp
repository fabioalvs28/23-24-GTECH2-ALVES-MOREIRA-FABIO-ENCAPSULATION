#include <iostream>

#include "World.h"



World::World() {};

double Distance(const Vector2& a, const Vector2& b) {
	double dx = a.GetX() - b.GetX();
	double dy = a.GetY() - b.GetY();
	return std::sqrt(dx * dx + dy * dy);
}

void World::Init()
{
	Player* player = new Player(2.0, 2.0, 10, Vector2(5.0, 5.0), 5);
	StaticObject* staticObject = new StaticObject(8.9, 8.5);
	BreakableObject* breakableObject = new BreakableObject(16.5, 20, 1);
	Mob* mob = new Mob(5.3, 4.9, 20, Vector2(7.5, 7.5), 2.5);

	entities.push_back(player);
	entities.push_back(staticObject);
	entities.push_back(breakableObject);
	entities.push_back(mob);


}

void World::Step()
{

	bool mobAlive = true;
	bool breakObjAlive = true;
	

	for (int i = 0; i < this->entities.size() - 1; i++)
	{

		Mob* mob = dynamic_cast<Mob*>(entities.at(i));
		BreakableObject* breakableObject = dynamic_cast<BreakableObject*>(entities.at(i));
		StaticObject* staticObject = dynamic_cast<StaticObject*>(entities.at(i));
		Player* player = dynamic_cast<Player*>(entities.at(i));

		if (mob != nullptr && breakableObject != nullptr)
		{
			if (mobAlive && breakObjAlive)
			{
				mob->Move(mob->GetPosition(), breakableObject->GetPosition(), mob->GetSpeed());
			}
		}

		if (player != nullptr && mob != nullptr && breakableObject != nullptr)
		{
			if (mobAlive && breakObjAlive)
			{
				player->Move(player->GetPosition(), mob->GetPosition(), player->GetSpeed());
			}
			if (!mobAlive && breakObjAlive)
			{
				player->Move(player->GetPosition(), breakableObject->GetPosition(), player->GetSpeed());

				if (Distance(player->GetPosition(), breakableObject->GetPosition()) <= 1)
				{
					player->Attack(breakableObject);
				}
			}
		}

		if (!mobAlive && !breakObjAlive)
		{
			std::cout << "Simulation finished" << std::endl;
			return;
		}
	}




}