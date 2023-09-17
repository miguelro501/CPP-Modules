#include "WrongCat.hpp"

void WrongCat::makeSound() const
{
	std::cout << "Howdi partner" << std::endl;
}


WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	std::cout  << type << " assignment operator" << std::endl;

	return *this;
}

//---------------constructors--------------------------
WrongCat::WrongCat()
{
	this->type = "WrongCat";

	std::cout << type << " default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal()
{
	*this = other;

	std::cout << type << " copy constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << type << " destructor" << std::endl;
}


