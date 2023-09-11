#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		std::string getName();
		Weapon& getWeapon();
		void setName(std::string name);
		void setWeapon(Weapon weapon);

		void attack();

	private:
		std::string name;
		Weapon &weapon;
};
#endif