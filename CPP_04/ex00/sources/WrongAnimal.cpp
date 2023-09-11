#include "WrongAnimal.hpp"

void WrongAnimal::makeSound() const {
	std::cout << type << " sound" << std::endl;
}

const std::string WrongAnimal::getType() const {
	return this->type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	this->type = other.type;

	std::cout  << type << " assignment operator" << std::endl;

	return *this;
}

WrongAnimal::WrongAnimal(): type("WrongAnimal") {
	std::cout << type << " default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) {
	this->type = type;

	std::cout << type << " type constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	*this = other;

	std::cout << type << " copy constructor" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << type << " destructor" << std::endl;
}

