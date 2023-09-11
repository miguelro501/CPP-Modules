#include "Cat.hpp"

void Cat::makeSound() const {
	std::cout << "Miau" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	this->type = other.type;

	std::cout  << type << " assignment operator" << std::endl;

	return *this;
}

Cat::Cat() {
	this->type = "Cat";
	this->brain = new Brain();

	std::cout << type << " default constructor" << std::endl;
}

Cat::Cat(const Cat& other): AAnimal() {
	*this = other;

	std::cout << type << " copy constructor" << std::endl;
}

Cat::~Cat() {
	delete brain;
	std::cout << type << " destructor" << std::endl;
}

