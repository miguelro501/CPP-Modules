#include <Ice.hpp>

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at "; 
	std::cout << target.getName();
	std::cout << "*" << std::endl;
}

AMateria *Ice::clone(void) const
{
	AMateria *result = new Ice();
	return (result);
}

Ice &Ice::operator=(const Ice &other)
{
	std::cout << "Ice Copy Assignment" << std::endl;
	this->type = other.type;
	return (*this);
}

//---------------constructors--------------------------
Ice::Ice(void): AMateria("ice")
{
	std::cout << "Ice Default Constructor" << std::endl;
}

Ice::Ice(const Ice &other): AMateria(other)
{
	std::cout << "Ice Copy Constructor" << std::endl;
	*this = other;
}

Ice::~Ice(void)
{
	std::cout << "Ice Default Destructor" << std::endl;
}

