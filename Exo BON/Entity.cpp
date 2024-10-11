#include <iostream>

#include "Entity.h"

Entity::Entity() : position(0, 0) {};

Entity::Entity(Vector2 _position) : position(_position) {};

 void Entity::SetPosition(Vector2 _position) 
{
	 this->position = _position;
}

 Vector2 Entity::GetPosition() const
 {
	 return this->position;
 }


