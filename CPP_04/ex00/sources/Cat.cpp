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

	std::cout << type << " default constructor" << std::endl;
}

Cat::Cat(const Cat& other): Animal() {
	*this = other;

	std::cout << type << " copy constructor" << std::endl;
}

Cat::~Cat() {
	std::cout << type << " destructor" << std::endl;
}

