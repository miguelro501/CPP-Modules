#include "Zombie.hpp"

Zombie::Zombie()
{
	setZombieName("zombie");
}

Zombie::Zombie(std::string name)
{
	setZombieName(name);
}

Zombie::~Zombie()
{
	std::cout << getZombieName() << " died" << std::endl;
}

void Zombie::announce()
{
	std::cout << getZombieName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setZombieName(std::string name)
{
	this->name = name;
}

std::string Zombie::getZombieName()
{
	return name;
}