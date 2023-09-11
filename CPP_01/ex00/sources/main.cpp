#include "Zombie.hpp"

int main()
{
	Zombie	*bob = new Zombie("Bob");
	bob->announce();
	randomChump("Marley");
	delete bob;
}