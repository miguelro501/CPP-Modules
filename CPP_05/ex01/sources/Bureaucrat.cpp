#include "Bureaucrat.hpp"

//-----------------Functions------------------------
void Bureaucrat::incrementGrade()
{
	if (this->grade > 1)
		this->grade--;
	else
		throw GradeTooHighException();
}
void Bureaucrat::decrementGrade()
{
	if (this->grade < GRADE_MAX)
		this->grade++;
	else
		throw GradeTooLowException();
}

void Bureaucrat::signForm(const std::string formName, const bool sign, const std::string msg) const
{
	if (sign)
		std::cout << this->getName() << " signed " << formName << "\n";
	else
		std::cout << this->getName() << " couldn't sign " << formName << " because " << msg << "\n";
}

//-----------------Getters------------------------
const std::string Bureaucrat::getName() const
{
	return (name);
}

int Bureaucrat::getGrade() const
{
	return (grade);
}

//-------------Constructors------------------------
Bureaucrat::Bureaucrat()
{
	//std::cout << "Default constructor called \n";
}

Bureaucrat::Bureaucrat(const std::string name,const int grade): name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
	//std::cout << "Bureaucrat constructor called \n";
}
Bureaucrat::~Bureaucrat()
{
	//std::cout << "Bureaucrat default destructor called \n";
}
//---------------Execptions-----------------------
const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: grade too high\n");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: grade too low\n");
}

//---------------Overloads------------------------	
Bureaucrat &Bureaucrat::operator = (const Bureaucrat &other)
{
	if (this == &other)
		return (*this);
	this->grade = other.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
	//std::cout << "Bureaucrat default constructor called \n";
}

std::ostream    &operator<< (std::ostream &os, const Bureaucrat &other)
{
	os << "name: " << other.getName() << " grade: " << other.getGrade() << "\n";
	return (os);
}