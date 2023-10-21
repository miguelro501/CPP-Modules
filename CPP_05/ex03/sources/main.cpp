#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	executeTest(AForm *form, const Bureaucrat *b)
{
	std::cout << "\n-------executeTest-------------\n";
	try
	{
		form->beSigned(*b);
		b->executeForm(*form);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
	std::cout << "-----------------------------------\n";
}

int main ()
{
	//AForm af();
	Bureaucrat *b;
	AForm *rrf;
	try
	{
		Intern someRandomIntern;
		
		b = new Bureaucrat("bob", 1);
		std::cout << "\ntesting shrub\n";
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		executeTest(rrf, b);
		delete rrf;
		std::cout << "\ntesting robo\n";
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		executeTest(rrf, b);
		delete rrf;
		std::cout << "\ntesting pres\n";
		rrf = someRandomIntern.makeForm("presidential pardon", "Obama");
		executeTest(rrf, b);
		delete b;
		delete rrf;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
}