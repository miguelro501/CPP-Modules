#include "Base.hpp"

//-----Functions---------------------

Base* generate() 
{
	std::srand(time(NULL));

	int n = rand() % 3 + 1;
	switch (n) {
		case 1:
			std::cout << "generated an A class" << std::endl;
			return new A;
		case 2:
			std::cout << "generated an B class" << std::endl;
			return new B;
		case 3:
			std::cout << "generated an C class" << std::endl;
			return new C;
	}
	return 0;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL) 
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p) != NULL) 
		std::cout << "B\n";
	else
		std::cout << "C\n";
}

void identify(Base& p)
{
	try 
	{
		A &aux = dynamic_cast<A&>(p);
		(void)aux;
		std::cout << "A address\n";
		return;
	} 
	catch (...) {}

	try 
	{
		B &aux = dynamic_cast<B&>(p);
		(void)aux;
		std::cout << "B address\n";
		return;
	} 
	catch (...) {}

	try 
	{
		C &aux = dynamic_cast<C&>(p);
		(void)aux;
		std::cout << "C address\n";
		return;
	} 
	catch (...) {}
}

Base::~Base(){}
