#include "Animal.hpp"

void Animal::makeSound() const
{
	std::cout << type << " sound" << std::endl;
}

const std::string Animal::getType() const
{
	return this->type;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	std::cout  << type << " assignment operator" << std::endl;

	return *this;
}

//---------------constructors--------------------------
Animal::Animal(): type("Animal")
{
	std::cout << type << " default constructor" << std::endl;
}

Animal::Animal(const std::string type)
{
	this->type = type;

	std::cout << type << " type constructor" << std::endl;
}

Animal::Animal(const Animal& other)
{
	*this = other;

	std::cout << type << " copy constructor" << std::endl;
}

Animal::~Animal() 
{
	std::cout << type << " destructor" << std::endl;
}


