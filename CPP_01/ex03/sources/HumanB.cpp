#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL){}

HumanB::~HumanB(){}

void HumanB::attack()
{
	if(getWeapon())
		std::cout << getName() << " attacks with their " << getWeapon()->getType() << std::endl;
	else
		std::cout << getName() << " has no weapon equiped" << std::endl;
}

std::string HumanB::getName()
{
	return (name);
}

Weapon* HumanB::getWeapon()
{
	return (weapon);
}

void HumanB::setName(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}