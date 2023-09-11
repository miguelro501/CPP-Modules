#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void setName(std::string name);
		void setHP(int HP);
		void setEP(int EP);
		void setAttack(int Atack);

		std::string getName();
		unsigned int getHP();
		unsigned int getEP();
		unsigned int getAttack();

	protected:
		std::string name;
		unsigned int hp;
		unsigned int ep;
		unsigned int _attack;
};

#endif