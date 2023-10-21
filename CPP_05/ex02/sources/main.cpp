#include "Bureaucrat.hpp"
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
	AForm *s;
	AForm *r;
	AForm *p;
	Bureaucrat *b;
	try
	{
		s = new ShrubberyCreationForm("Shrub_teste");
		r = new RobotomyRequestForm("Robo_teste");
		p = new PresidentialPardonForm("Pres_teste");
		b = new Bureaucrat("bob", 1);
		std::cout << "\ntesting shrub\n";
		executeTest(s, b);
		std::cout << "\ntesting robo\n";
		executeTest(r, b);
		std::cout << "\ntesting pres\n";
		executeTest(p, b);
		delete s;
		delete r;
		delete p;
		delete b;
	}
	catch (const std::exception &e)
	{
		delete s;
		delete r;
		delete p;
		std::cerr << e.what();
	}
}