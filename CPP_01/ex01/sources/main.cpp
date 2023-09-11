#include "Zombie.hpp"

int main()
{
	int hordeSize = 42;
	std::string hordeName = "Julios";
	Zombie* horde = zombieHorde(hordeSize, hordeName);
	
	delete [] horde;
}