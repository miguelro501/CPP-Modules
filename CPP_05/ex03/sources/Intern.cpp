#include <Intern.hpp>
#include <AForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

//Functions
 AForm*   Intern::makeForm(std::string name, std::string target)
{
	std::string formNames[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    AForm*    forms[] = {
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target),
        new ShrubberyCreationForm(target)
    };
    
    for (int i = 0; i < 3; i++) {
        if (name == formNames[i]) {
            std::cout << "Intern creates " << name << "\n";
			for (int j = 0; j < 3; j++)
			{
				if (j != i)
					delete forms[j];
			}
            return forms[i];
        }
    }
    std::cout << "Intern cannot create " << name << " form\n";
    return 0;
}

//OCF
Intern::~Intern()
{
	// std::cout << "Intern Default Destructor" << std::endl;
}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern	&Intern::operator=(const Intern &other)
{
	*this = other;
	return (*this);
}

Intern::Intern()
{
	//std::cout << "Intern default constructor called\n";
}