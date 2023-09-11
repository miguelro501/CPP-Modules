#pragma once

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	public:

		virtual void makeSound() const;
		const std::string getType() const ;

		WrongAnimal &operator = (const WrongAnimal &src);

		WrongAnimal();
		WrongAnimal(const std::string type);
		WrongAnimal(const WrongAnimal& other);
		virtual ~WrongAnimal();

	protected:
		std::string type;
};

#endif