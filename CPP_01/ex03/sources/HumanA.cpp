#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {}


HumanA::~HumanA(){}

void HumanA::attack()
{
	std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}

std::string HumanA::getName()
{
	return (name);
}

Weapon& HumanA::getWeapon()
{
	return (weapon);
}

void HumanA::setName(std::string name)
{
	this->name = name;
}

void HumanA::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}
