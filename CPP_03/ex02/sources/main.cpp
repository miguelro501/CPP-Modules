#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>

int main() {
	ScavTrap *c1 = new ScavTrap();
	std::cout << std::endl;
	FragTrap *f2 = new FragTrap("Bear");
	std::cout << std::endl;
	FragTrap *aux = new FragTrap();
	std::cout << std::endl;
	FragTrap *f3 = new FragTrap(*aux);

	std::cout << "\n=============================\n" << std::endl;

	c1->attack("Wolf");
	f2->attack("Fish");
	f3->attack("Lion");

	std::cout << "\n=============================\n" << std::endl;

	c1->takeDamage(80);
	f2->takeDamage(50);
	f2->takeDamage(50);
	f3->takeDamage(5);

	std::cout << "\n=============================\n" << std::endl;

	c1->beRepaired(1000);
	f2->beRepaired(1);
	f3->beRepaired(5);

	std::cout << "\n=============================\n" << std::endl;

	c1->guardGate();
	f2->highFivesGuys();
	f3->highFivesGuys();

	std::cout << "\n=============================\n" << std::endl;

	delete c1;
	std::cout << std::endl;
	delete f2;
	std::cout << std::endl;
	delete aux;
	std::cout << std::endl;
	delete f3;
}