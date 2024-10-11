#pragma once

#ifndef INTEGER_H__
#define INTEGER_H__

class Integer {

    int x;

public:

    Integer();
    Integer(int _x);

    int GetInt() const;

    Integer operator+(const Integer& other);
    Integer operator+=(const Integer& other);
    Integer operator-(const Integer& other);
    Integer operator-=(const Integer& other);
    Integer operator*(const Integer& other);
    Integer operator*=(const Integer& other);
    Integer operator/(const Integer& other);
    Integer operator/=(const Integer& other);
    Integer operator%(const Integer& other);
    Integer operator%=(const Integer& other);
    Integer operator<<(const Integer& other);

    Integer Pow(int exponent);

};



#endif