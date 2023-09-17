#include "Dog.hpp"

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}

Dog& Dog::operator=(const Dog& other) 
{
	if (this == &other)
		return *this;
	this->type = other.type;
	std::cout  << type << " assignment operator" << std::endl;

	return *this;
}
//---------------constructors--------------------------
Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();

	std::cout << type << " default constructor" << std::endl;
}

Dog::Dog(const Dog& other): AAnimal()
{
	*this = other;

	std::cout << type << " copy constructor" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << type << " destructor" << std::endl;
}
