#include "Bureaucrat.hpp"

void	incrementDecrementTest(const std::string name, const int grade)
{
	std::cout << "\n-------incrementDecrementTest-------------\n";

	std::cout << "\n-------decrementTest-------------\n";
	try
	{
		Bureaucrat b(name, grade);
		std::cout << "Before: " << b;
		b.decrementGrade();
		std::cout << "After: " << b;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
	std::cout << "\n-------incrementTest-------------\n";
	try
	{
		Bureaucrat b(name, grade);
		std::cout << "Before: " << b;
		b.incrementGrade();
		std::cout << "After: " << b;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
}

void	constructorTest(const std::string name, const int grade)
{
	std::cout << "\n-------constructorTest-------------\n";
	try
	{
		Bureaucrat b(name, grade);
		std::cout << b;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
	std::cout << "-----------------------------------\n";
}

int main ()
{
	constructorTest("ZE", 24);
	std::cout << "\n";
	constructorTest("ZE", 0);
	std::cout << "\n";
	constructorTest("ZE", 151);
	std::cout << "\n";

	incrementDecrementTest("ZE", 64);
	std::cout << "\n";
	incrementDecrementTest("ZE", 1);
	std::cout << "\n";
	incrementDecrementTest("ZE", 150);
}