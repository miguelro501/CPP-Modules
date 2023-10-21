#include "Form.hpp"

//-----------------Getters------------------------
const std::string Form::getName() const
{
	return (this->name);
}

int Form::getGradeSign() const
{
	return (this->gradeSign);
}

int Form::getGradeExec() const
{
	return (this->gradeExec);
}

bool Form::getSign() const
{
	return (this->sign);
}

void Form::beSigned(const Bureaucrat &b)
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
Form::Form(): name("Generic form"), gradeSign(150), gradeExec(150), sign(false)
{
	//std::cout << "Form default constructor called \n";
}

Form::Form(const std::string name,const int gradeSign, const int gradeExec):
name(name), gradeSign(gradeSign), gradeExec(gradeExec), sign(false)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
	//std::cout << "Form constructor called \n";
}
Form::~Form()
{
	//std::cout << "Form default destructor called \n";
}
//---------------Execptions-----------------------
const char * Form::GradeTooHighException::what() const throw()
{
	return ("Error: grade too high\n");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Error: grade too low\n");
}

//---------------Overloads------------------------	
Form &Form::operator = (const Form &other)
{
	if (this == &other)
		return (*this);
	this->sign = other.sign;
	return (*this);
}

Form::Form(const Form &other): name(other.getName()), gradeSign(other.getGradeSign()),
gradeExec(other.getGradeExec()), sign(other.getSign())
{
	*this = other;
	//std::cout << "Form default constructor called \n";
}

std::ostream    &operator<< (std::ostream &os, const Form &other)
{
	os << "name: " << other.getName() << " signed: "<< other.getSign() << " grade to sign: " 
		<< other.getGradeSign() << " grade to exec: " << other.getGradeExec() << "\n";
	return (os);
}