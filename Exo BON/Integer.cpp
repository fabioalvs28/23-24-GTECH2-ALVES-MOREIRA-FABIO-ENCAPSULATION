#include <iostream>
#include "Integer.h"

Integer::Integer() : x(0) {}

Integer::Integer(int _x) : x(_x) {}

int Integer::GetInt() const {
	return this->x;
}

Integer Integer::operator+(const Integer& other)
{
	return int(this->x + other.GetInt());
}

Integer Integer::operator+=(const Integer& other)
{
	return int(this->x = this->x = other.GetInt());
}

Integer Integer::operator-(const Integer& other)
{
	return int(this->x - other.GetInt());
}

Integer Integer::operator-=(const Integer& other)
{
	return int(this->x = this->x - other.GetInt());
}

Integer Integer::operator*(const Integer& other)
{
	return int(this->x * other.GetInt());
}

Integer Integer::operator*=(const Integer& other)
{
	return int(this->x = this->x * other.GetInt());
}

Integer Integer::operator/(const Integer& other)
{
	return int(this->x / other.GetInt());
}

Integer Integer::operator/=(const Integer& other)
{
	return int(this->x = this->x / other.GetInt());
}

Integer Integer::operator%(const Integer& other)
{
	return int(this->x % other.GetInt());
}

Integer Integer::operator%=(const Integer& other)
{
	return int(this->x = this->x % other.GetInt());
}

Integer Integer::operator<<(const Integer& other)
{
	return int(this->x << other.GetInt());
}

Integer Integer::Pow(int _exponent)
{
	for (int i = 0; i < _exponent - 1; i++)
	{
		this->x += this->x;
	}

	return this->x;
}

