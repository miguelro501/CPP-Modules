#include "DiamondTrap.hpp"

#include <iostream>

int main()
{
	ScavTrap *c1 = new ScavTrap();
	std::cout << std::endl;
	DiamondTrap *d2 = new DiamondTrap("Bear");
	std::cout << std::endl;
	DiamondTrap *aux = new DiamondTrap();
	std::cout << std::endl;
	DiamondTrap *d3 = new DiamondTrap(*aux);

	std::cout << "\n=============================\n" << std::endl;

	c1->attack("Wolf");
	d2->attack("Fish");
	d3->attack("Lion");

	std::cout << "\n=============================\n" << std::endl;

	c1->takeDamage(80);
	d2->takeDamage(50);
	d2->takeDamage(50);
	d3->takeDamage(5);

	std::cout << "\n=============================\n" << std::endl;

	c1->beRepaired(1000);
	d2->beRepaired(1);
	d3->beRepaired(5);

	std::cout << "\n=============================\n" << std::endl;

	c1->guardGate();

	d2->guardGate();
	d3->guardGate();

	d2->highFivesGuys();
	d3->highFivesGuys();

	d2->whoAmI();
	d3->whoAmI();

	std::cout << "\n=============================\n" << std::endl;

	delete c1;
	std::cout << std::endl;
	delete d2;
	std::cout << std::endl;
	delete aux;
	std::cout << std::endl;
	delete d3;
}