#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		
		std::string getName();
		Weapon* getWeapon();
		void setName(std::string name);
		void setWeapon(Weapon& weapon);
		void attack();

	private:
		std::string name;
		Weapon* weapon;
};
#endif