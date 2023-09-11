#pragma once

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public AAnimal {
	public:
	
		void makeSound() const;

		Dog& operator=(const Dog& other);

		Dog();
		Dog(const Dog& other);
		~Dog();
	
	private:
		Brain	*brain;

};

#endif