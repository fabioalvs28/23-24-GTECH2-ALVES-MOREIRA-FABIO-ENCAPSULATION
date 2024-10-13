#include <iostream>
#include <string>

#include "World.h"


int main(int argc, const char* argv[])
{
	World world;

	world.Init();

	while (true)
	{
		world.Step();
	}


	return 0;

}
