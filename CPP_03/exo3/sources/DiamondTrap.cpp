#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->name = "Peter";
	this->ClapTrap::name = name.append("_clap_name");
	this->hp = FragTrap::hp;
	this->ep = ScavTrap::ep;
	this->_attack = FragTrap::_attack;

	std::cout << name << " DiamondTrap default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	this->ClapTrap::name = name.append("_clap_name");
	this->hp = FragTrap::hp;
	this->ep = ScavTrap::ep;
	this->_attack = FragTrap::_attack;
	std::cout << name << " DiamondTrap name constructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src): 
	ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	*this = src;
	
	std::cout << name << " DiamondTrap copy constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << name << " called DiamondTrap destructor" << std::endl;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &src)
{
	this->name = src.name;
	this->hp = src.hp;
	this->ep = src.ep;
	this->_attack = src._attack;
	return (*this);
}

void    DiamondTrap::takeDamage(unsigned int amount)
{
	ScavTrap::takeDamage(amount);
}

void    DiamondTrap::beRepaired(unsigned int amount)
{
	ScavTrap::beRepaired(amount);
}

void    DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
void    DiamondTrap::whoAmI(void)
{
	std::cout << "==========================================" << std::endl;
	std::cout << "Hello I have 2 names: " << std::endl;
	std::cout << "Fisrt Name  = " << this->name << std::endl;
	std::cout << "Second Name = " << ClapTrap::name << std::endl;
	std::cout << "==========================================" << std::endl;
}