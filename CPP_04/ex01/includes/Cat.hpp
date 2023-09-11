#pragma once

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal {
	public:
	
		void makeSound() const;

		Cat& operator=(const Cat& other);
		
		Cat();
		Cat(const Cat& other);
		~Cat();

	 private:
        Brain   *brain;

};

#endif