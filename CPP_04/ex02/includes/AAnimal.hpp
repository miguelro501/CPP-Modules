#pragma once

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {
	public:

		virtual void makeSound() const = 0;
		const std::string getType() const ;

		AAnimal &operator = (const AAnimal &other);

		AAnimal();
		AAnimal(const std::string type);
		AAnimal(const AAnimal& other);
		virtual ~AAnimal();

	protected:
		std::string type;
};

#endif