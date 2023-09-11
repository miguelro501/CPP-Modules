#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		
		void setZombieName(std::string name);
		std::string getZombieName();
		void announce();
		
	private:
		std::string name;

};

Zombie* zombieHorde(int N, std::string name);
#endif