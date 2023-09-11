#include "AMateria.hpp"
#include "ICharacter.hpp"


void	AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << " used an Materia" << std::endl;
}

AMateria *AMateria::clone(void) const
{
	AMateria *newMateria = NULL;
	return (newMateria);
}

const std::string	&AMateria::getType() const
{
	return (type);
}

AMateria &AMateria::operator = (const AMateria &src)
{
	this->type = src.type;
	return (*this);
}

//---------------constructors--------------------------
AMateria::AMateria()
{
	std::cout << "AMateria Default Constructor" << std::endl;
}

AMateria::AMateria(const std::string &type): type(type)
{
	std::cout << "AMateria Type Constructor" << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Default Destructor" << std::endl;
}




