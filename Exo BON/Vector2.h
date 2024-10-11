#pragma once
#ifndef VECTOR2_H__
#define VECTOR2_H__

#include <string>

class Vector2

{
private:
	float x;
	float y;

public:
	Vector2();
	Vector2(float _x, float _y);

	float GetX() const;
	float GetY() const;

	void SetX(float _x);
	void SetX(std::string _x);

	void SetY(float _y);

	Vector2 operator+(const Vector2& other);

	void Print();
};

#endif