#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int main() {
	ClapTrap *c1 = new ClapTrap();
	std::cout << std::endl;
	ScavTrap *s2 = new ScavTrap("Bear");
	std::cout << std::endl;
	ScavTrap *aux = new ScavTrap();
	std::cout << std::endl;
	ScavTrap *s3 = new ScavTrap(*aux);

	std::cout << "\n=============================\n" << std::endl;

	c1->attack("Wolf");
	s2->attack("Fish");
	s3->attack("Lion");

	std::cout << "\n=============================\n" << std::endl;

	c1->takeDamage(80);
	s2->takeDamage(50);
	s2->takeDamage(50);
	s3->takeDamage(5);

	std::cout << "\n=============================\n" << std::endl;

	c1->beRepaired(1000);
	s2->beRepaired(1);
	s3->beRepaired(5);

	std::cout << "\n=============================\n" << std::endl;

	s2->guardGate();
	s3->guardGate();

	std::cout << "\n=============================\n" << std::endl;

	delete c1;
	std::cout << std::endl;
	delete s2;
	std::cout << std::endl;
	delete aux;
	std::cout << std::endl;
	delete s3;
}