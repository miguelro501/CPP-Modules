#include "Bureaucrat.hpp"
#include "Form.hpp"

void	signTest(Form f, const Bureaucrat b)
{
	std::cout << "\n-------signTest-------------\n";

	try
	{
		std::cout << "Before: " << f;
		f.beSigned(b);
		std::cout << "After: " << f;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
}

void	constructorTest(const std::string name, const int gradeSign, const int gradeExec)
{
	std::cout << "\n-------constructorTest-------------\n";
	try
	{
		Form f(name, gradeSign, gradeExec);
		std::cout << f;
		Form f2;
		std::cout << f2;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
	std::cout << "-----------------------------------\n";
}

int main ()
{
	constructorTest("Form1", 24, 24);
	std::cout << "\n";
	constructorTest("Form2", 0, 0);
	std::cout << "\n";
	constructorTest("Form3", 151, 151);
	std::cout << "\n";

	try
	{
		Form f("Form1", 24, 24);
		signTest(f, Bureaucrat("joe", 1));
		signTest(f, Bureaucrat("james", 65));
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	
}