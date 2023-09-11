#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
	this->name = "Jeff";
	this->hp = 100;
	this->ep = 50;
	this->_attack = 20;
	std::cout << name << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hp = 100;
	this->ep = 50;
	this->_attack = 20;
	std::cout << name << "ScavTrap name constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src):
	ClapTrap()
{
	*this = src;
	std::cout << name << "ScavTrap copy constructor" << std::endl;
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
	if(hp > amount)
		hp -= amount;
	else
		hp = 0;
	std::cout <<  name << " received "<< amount << " damage" << std::endl;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
	if(ep == 0)
		std::cout << name << " is out of ep" << std::endl;
	else if(hp == 0)
		std::cout << name << " cant repair cause is dead" << std::endl;
	else
	{
		hp += amount;
		ep--;
		std::cout << name << " repaired " << amount << " health points" << std::endl;
	}
}

void    ScavTrap::attack(const std::string &target)
{
	if(ep == 0)
		std::cout << name << " is out of ep" << std::endl;
	else if(hp == 0)
		std::cout << name << " cant attack cause is dead" << std::endl;
	else
	{
		ep--;
		std::cout << name << " has dealt " << _attack << " damage to " << target << std::endl;
	}
	ep -= 1;
}