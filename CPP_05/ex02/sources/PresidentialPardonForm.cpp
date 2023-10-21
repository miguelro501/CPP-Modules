#include "PresidentialPardonForm.hpp"

//-----------------Functions------------------------
void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getSign() && executor.getGrade() <= this->getGradeExec())
	{
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox\n";
	}
	else
		throw GradeTooLowException();
}

//-------------Constructors------------------------
PresidentialPardonForm::PresidentialPardonForm():
	AForm("PresidentialPardonForm", 25, 5)
{
	this->target = "Presidential_Target";
	//std::cout << "Presidential default constructor called \n";
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other):
	AForm(other)
{
	*this = other;
}
PresidentialPardonForm::PresidentialPardonForm(const std::string target):
	AForm("PresidentialPardonForm", 25, 5)
{
	this->target = target;
	//std::cout << "Presidential target constructor called \n";
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	//std::cout << "Presidential default destructor called \n";
}

//---------------Overloads------------------------	
PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &other)
{
	this->target = other.target;
	this->sign = other.sign;
	return (*this);
}