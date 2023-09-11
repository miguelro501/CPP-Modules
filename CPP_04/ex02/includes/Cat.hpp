#pragma once

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public AAnimal {
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