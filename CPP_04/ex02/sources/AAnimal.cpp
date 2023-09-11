#include "AAnimal.hpp"

const std::string AAnimal::getType() const {
	return this->type;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	this->type = other.type;

	std::cout << "AAnimal assignment operator" << std::endl;

	return *this;
}

AAnimal::AAnimal(): type("AAnimal") {
	std::cout << "AAnimal default constructor" << std::endl;
}

AAnimal::AAnimal(const std::string type) {	
	this->type = type;

	std::cout << "AAnimal type constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) {
	*this = other;

	std::cout << "AAnimal copy constructor" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor" << std::endl;
}


