#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->name = "Jeff";
	this->hp = 100;
	this->ep = 50;
	this->_attack = 20;
	std::cout << name << " ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap()
{
	this->name = name;
	this->hp = 100;
	this->ep = 50;
	this->_attack = 20;
	std::cout << name << " ScavTrap name constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap()
{
	*this = src;
	std::cout << name << " ScavTrap copy constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << name << " called ScavTrap destructor" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &src)
{
	this->name = src.name;
	this->hp = src.hp;
	this->ep = src.ep;
	this->_attack = src._attack;
	return (*this);
}

void    ScavTrap::guardGate(void)
{
	std::cout << getName();
	std::cout << " is in Gate Keeper mode." << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
}

void    ScavTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
}

void    ScavTrap::attack(const std::string &target)
{
	ClapTrap::attack(target);
}