#pragma once

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	public:

		virtual void makeSound() const;
		const std::string getType() const ;

		Animal &operator = (const Animal &other);

		Animal();
		Animal(const std::string type);
		Animal(const Animal& other);
		virtual ~Animal();

	protected:
		std::string type;
};

#endif