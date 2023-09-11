#pragma once

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal {
	public:
	
		void makeSound() const;

		WrongCat& operator=(const WrongCat& other);

		WrongCat();
		WrongCat(const WrongCat& other);
		~WrongCat();

};

#endif