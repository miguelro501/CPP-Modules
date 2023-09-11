#pragma once

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {
	public:
	
		void makeSound() const;

		Dog& operator=(const Dog& other);

		Dog();
		Dog(const Dog& other);
		~Dog();

};

#endif