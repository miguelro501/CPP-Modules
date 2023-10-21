#include "ShrubberyCreationForm.hpp"

//-----------------Functions------------------------
void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSign() && executor.getGrade() <= this->getGradeExec())
	{
		std::string	fileName = this->target + "_shrubbery";
		std::ofstream newFile(fileName.c_str());

		newFile << std::endl;
		newFile << "       ###       " << std::endl;
		newFile << "  	  #o###    " << std::endl;
		newFile << "    #####o###  " << std::endl;
		newFile << "   #o###|#/### " << std::endl;
		newFile << "  	###o|/#o#     " << std::endl;
		newFile << "     # }|{  #           " << std::endl;
		newFile << "       }|{             " << std::endl;
		newFile.close();
	}
	else
		throw GradeTooLowException();
}

//-------------Constructors------------------------
ShrubberyCreationForm::ShrubberyCreationForm():
	AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = "Shrubbery_Target";
	//std::cout << "Shrubbery default constructor called \n";
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):
	AForm(other)
{
	*this = other;
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):
	AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
	//std::cout << "Shrubbery target constructor called \n";
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//std::cout << "Shrubbery default destructor called \n";
}

//---------------Overloads------------------------	
ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &other)
{
	this->target = other.target;
	this->sign = other.sign;
	return (*this);
}