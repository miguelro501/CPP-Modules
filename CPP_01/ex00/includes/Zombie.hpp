#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		
		void setZombieName(std::string name);
		std::string getZombieName();
		
		void announce();
	
	private:
		std::string name;
};

Zombie* newZombie(std::string name);
void randomChump( std::string name);
#endif