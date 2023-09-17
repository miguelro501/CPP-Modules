#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int main()
{
	Animal *animal[6];

	for (int i = 0; i < 6; i++)
	{
		if (i < 3)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
		std::cout << std::endl;
	}

	std::cout << "=======================================" << std::endl;

	for (int i = 0; i < 6; i++)
	{
		std::cout << animal[i]->getType() << " ";
		animal[i]->makeSound();
	}
	
	std::cout << "=======================================" << std::endl;
	
	for (int i = 0; i < 6; i++)
	{
		if (i == 3)
			std::cout << "=======================================" << std::endl;
		else
			std::cout << std::endl;
		delete animal[i];
	}

	return (0);
}