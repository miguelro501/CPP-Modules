#include "AForm.hpp"

//-----------------Getters------------------------
const std::string AForm::getName() const
{
	return (this->name);
}

int AForm::getGradeSign() const
{
	return (this->gradeSign);
}

int AForm::getGradeExec() const
{
	return (this->gradeExec);
}

bool AForm::getSign() const
{
	return (this->sign);
}

void AForm::beSigned(const Bureaucrat &b)
{
	if (this->sign)
		std::cout << this->getName() << " is already signed\n";
	else if (b.getGrade() > this->getGradeSign())
	{

		b.signForm(this->getName(), this->getSign(), "grade is too low");
		throw GradeTooLowException();
	}
	else
	{
		this->sign = true;
		b.signForm(this->getName(), this->getSign(), "grade is too low");
	}
}

//-------------Constructors------------------------
AForm::AForm(): name("Generic AForm"), gradeSign(150), gradeExec(150), sign(false)
{
	//std::cout << "AForm default constructor called \n";
}

AForm::AForm(const std::string name,const int gradeSign, const int gradeExec):
name(name), gradeSign(gradeSign), gradeExec(gradeExec), sign(false)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
	//std::cout << "AForm constructor called \n";
}
AForm::~AForm()
{
	//std::cout << "AForm default destructor called \n";
}
//---------------Execptions-----------------------
const char * AForm::GradeTooHighException::what() const throw()
{
	return ("Error: grade too high\n");
}

const char * AForm::GradeTooLowException::what() const throw()
{
	return ("Error: grade too low\n");
}

//---------------Overloads------------------------	
AForm &AForm::operator = (const AForm &other)
{
	if (this == &other)
		return (*this);
	this->sign = other.sign;
	return (*this);
}

AForm::AForm(const AForm &other): name(other.getName()), gradeSign(other.getGradeSign()),
gradeExec(other.getGradeExec()), sign(other.getSign())
{
	*this = other;
	//std::cout << "AForm default constructor called \n";
}

std::ostream    &operator<< (std::ostream &os, const AForm &other)
{
	os << "name: " << other.getName() << " signed: "<< other.getSign() << " grade to sign: " 
		<< other.getGradeSign() << " grade to exec: " << other.getGradeExec() << "\n";
	return (os);
}