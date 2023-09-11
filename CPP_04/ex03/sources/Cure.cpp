#include <Cure.hpp>

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals "; 
	std::cout << target.getName();
	std::cout << "'s wounds *" << std::endl;
}

AMateria *Cure::clone(void) const
{
	AMateria *result = new Cure();
	return (result);
}

Cure &Cure::operator=(const Cure &other)
{
	std::cout << "Cure Copy Assignment" << std::endl;
	this->type = other.type;
	return (*this);
}

//---------------constructors--------------------------
Cure::Cure(void): AMateria("cure")
{
	std::cout << "Cure Default Constructor" << std::endl;
}

Cure::Cure(const Cure &other): AMateria(other)
{
	std::cout << "Cure Copy Constructor" << std::endl;
	*this = other;
}

Cure::~Cure(void)
{
	std::cout << "Cure Default Destructor" << std::endl;
}
