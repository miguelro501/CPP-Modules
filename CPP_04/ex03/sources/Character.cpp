#include "Character.hpp"

void	Character::equip(AMateria *materia)
{
	if (!materia)
		return ;
	if (nbrMaterias > NBR_SLOTS)
	{
		for (int i = 0; i < NBR_SLOTS; i++)
		{
			if (!inventory[i])
			{
				inventory[i] = materia;
				nbrMaterias++;
				std::cout << "Materia equiped to your inventory" << std::endl;
				return ;
			}
		}
	}
	else
		std::cout << this->name << " inventory is full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < NBR_SLOTS)
	{
		inventory[idx] = NULL;
		nbrMaterias -= 1;
		std::cout << "Materia unequiped from your inventory" << std::endl;
	}
	else
		std::cout << "Invalid index slot" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < NBR_SLOTS)
	{
		if (this->inventory[idx])
			this->inventory[idx]->use(target);
		else
			std::cout << "Inventory slot is empty" << std::endl;
	}
	else
		std::cout << "Invalid index slot" << std::endl;
}

const std::string &Character::getName(void) const
{
	return (this->name);
}

void	Character::showInventory(void) const
{
	std::cout << "==========================================" << std::endl;
	std::cout << this->name << " Inventory" << std::endl;
	for (int i = 0; i < NBR_SLOTS; i++)
	{
		if (this->inventory[i])
			std::cout << this->inventory[i] << std::endl;
		else
			std::cout << "Empty Slot" << std::endl;
	}
	std::cout << "==========================================" << std::endl;
}

Character &Character::operator=(const Character &other)
{
	if (this == &other)
		return (*this);
	for (int i = 0; i < NBR_SLOTS; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (other.inventory[i])
			this->inventory[i] =  other.inventory[i]->clone();
	}
	this->nbrMaterias = other.nbrMaterias;
	return (*this);
}

//---------------constructors--------------------------
Character::Character(): nbrMaterias(0)
{
	std::cout << "Character Default Constructor" << std::endl;
}

Character::Character(const std::string &name):
	name(name), nbrMaterias(0)
{
	for (int i = 0; i < NBR_SLOTS; i++)
		this->inventory[i] = NULL;
	std::cout << "Character Name Constructor" << std::endl;
}

Character::Character(const Character &other)
{
	for (int i = 0; i < NBR_SLOTS; i++)
		this->inventory[i] = NULL;
	*this = other;
}

Character::~Character()
{
	for (int i = 0; i < NBR_SLOTS; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	std::cout << "Character Destructor" << std::endl;
}
