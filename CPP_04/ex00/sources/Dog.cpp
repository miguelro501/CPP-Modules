#include "Dog.hpp"

void Dog::makeSound() const {
	std::cout << "Bark" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	this->type = other.type;

	std::cout  << type << " assignment operator" << std::endl;

	return *this;
}

Dog::Dog() {
	this->type = "Dog";

	std::cout << type << " default constructor" << std::endl;
}

Dog::Dog(const Dog& other): Animal() {
	*this = other;

	std::cout << type << " copy constructor" << std::endl;
}

Dog::~Dog() {
	std::cout << type << " destructor" << std::endl;
}
