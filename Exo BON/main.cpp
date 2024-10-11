#include <iostream>
#include <string>


#include "StaticObject.h"
#include "BreakableObject.h"

int main(int argc, const char* argv[])
{
	StaticObject test;
	test.SetPosStaticObject(2.8, 2.5);

	BreakableObject test1;
	test1.TakeDamage(2.2);

	return 0;
}
