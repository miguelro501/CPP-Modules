#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Bob"), hp(10), ep(10), _attack(0)
{
	std::cout << name << " Created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), ep(10), _attack(0)
{
	std::cout << name << " Created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << name << " copy Created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << name << " has been destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if(ep == 0)
		std::cout << name << " is out of ep" << std::endl;
	else if(hp == 0)
		std::cout << name << " is dead" << std::endl;
	else
	{
		ep--;
		std::cout << name << " has dealt " << _attack << " damage to " << target << std::endl;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if(hp > amount)
		hp -= amount;
	else
		hp = 0;
	std::cout <<  name << " received "<< amount << " damage" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(ep == 0)
		std::cout << name << " is out of ep" << std::endl;
	else if(hp == 0)
		std::cout << name << " is dead" << std::endl;
	else
	{
		hp += amount;
		ep--;
		std::cout << name << " repaired " << amount << " health points" << std::endl;
	}
}

void ClapTrap::setName(std::string name)
{
	this->name = name;
}
void ClapTrap::setHP(int hp)
{
	this->hp = hp;
}
void ClapTrap::setEP(int ep)
{
	this->ep = ep;
}
void ClapTrap::setAttack(int attack)
{
	this->_attack = attack;
}

std::string ClapTrap::getName()
{
	return (name);
}
unsigned int ClapTrap::getHP()
{
	return (hp);
}
unsigned int ClapTrap::getEP()
{
	return (ep);
}
unsigned int ClapTrap::getAttack()
{
	return (_attack);
}