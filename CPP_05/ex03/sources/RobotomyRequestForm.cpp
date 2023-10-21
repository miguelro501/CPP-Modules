#include "RobotomyRequestForm.hpp"

//-----------------Functions------------------------
void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSign() && executor.getGrade() <= this->getGradeExec())
	{
		srand((unsigned) time(NULL));
		int rnd = (rand() % 10) + 1;
		std::cout << "Drilling Noises\n";
		if (rnd < 5)
			std::cout << "Robotomized failed\n";
		else
			std::cout << this->target << " has been robotomized successfully\n";
	}
	else
		throw GradeTooLowException();
}

//-------------Constructors------------------------
RobotomyRequestForm::RobotomyRequestForm():
	AForm("RobotomyRequestForm", 72, 45)
{
	this->target = "Robotomy_Target";
	//std::cout << "Robotomy default constructor called \n";
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):
	AForm(other)
{
	*this = other;
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target):
	AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
	//std::cout << "Robotomy target constructor called \n";
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	//std::cout << "Robotomy default destructor called \n";
}

//---------------Overloads------------------------	
RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &other)
{
	this->target = other.target;
	this->sign = other.sign;
	return (*this);
}