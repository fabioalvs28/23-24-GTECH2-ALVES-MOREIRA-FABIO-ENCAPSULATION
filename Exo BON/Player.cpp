#include <iostream>

#include "Player.h"

Player::Player() {};

Player::Player(float _x, float _y, float _maxHp, Vector2 _direction, float _speed) : Entity(Vector2(_x, _y)), Alive(_maxHp), AMovable(_direction, _speed)
{

	std::cout << "Player just created at x= " << _x << " and y= " << _y << " with " << _maxHp << " HP with direction x= " << _direction.GetX() << " and y= " << _direction.GetY() << " with a speed of " << _speed << std::endl;

};

void Player::TakeDamage(float _damage)
{
	this->Alive::TakeDamage(_damage);
	if (this->GetCurrentHp() <= 0)
	{
		std::cout << "Player just died skill issue" << std::endl;
	}
}

Vector2 Player::Move(Vector2 _position, Vector2 _direction, float _speed)
{
	this->SetPosition(Vector2(this->AMovable::Move(_position, _direction, _speed)));
	std::cout << "Player moved to x= " << this->GetPosition().GetX() << ", y= " << this->GetPosition().GetY() << std::endl;
	return this->GetPosition();
}

void Player::Attack(Alive* _alive, float _damage)
{
	std::cout << "Player just attacked" << std::endl;
	_alive->TakeDamage(_damage);
}