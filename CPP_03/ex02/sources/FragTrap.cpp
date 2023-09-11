#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->name = "Peter";
	this->hp = 100;
	this->ep = 50;
	this->_attack = 30;
	std::cout << name << " FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap()
{
	this->name = name;
	this->hp = 100;
	this->ep = 100;
	this->_attack = 30;
	std::cout << name << " FragTrap name constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src):
	ClapTrap()
{
	*this = src;
	std::cout << name << " FragTrap copy constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << name << " called FragTrap destructor" << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &src)
{
	this->name = src.name;
	this->hp = src.hp;
	this->ep = src.ep;
	this->_attack = src._attack;
	return (*this);
}

void    FragTrap::highFivesGuys(void)
{
	std::cout << getName();
	std::cout << " requests a high five." << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount)
{
	if(hp > amount)
		hp -= amount;
	else
		hp = 0;
	std::cout <<  name << " received "<< amount << " damage" << std::endl;
}

void    FragTrap::beRepaired(unsigned int amount)
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

void    FragTrap::attack(const std::string &target)
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