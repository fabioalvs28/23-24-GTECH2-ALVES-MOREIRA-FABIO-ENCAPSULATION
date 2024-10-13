#include <iostream>
#include <string>

#include "Vector2.h"

Vector2::Vector2() : x(0.f), y(0.f) {}

Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {}

float Vector2::GetX() const {
    return this->x;
}

float Vector2::GetY() const {
    return this->y; //permet de prendre le y de la classe et non de la fonction
}

void Vector2::SetX(float _x) {
    this->x = _x;
}

void Vector2::SetX(std::string _x)
{
    this->x = std::stof(_x);
}

void Vector2::SetY(float _y)
{
    this->y = _y;
}

Vector2 Vector2::operator+(const Vector2& other)
{
    return Vector2(this->x + other.GetX(), this->y + other.GetY());
}

Vector2 Vector2::operator-(const Vector2& other)
{
    return Vector2(this->x - other.GetX(), this->y - other.GetY());
}

void Vector2::Print()
{
    std::cout << this->x << ", " << this->y << std::endl;
}

