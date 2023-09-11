#include <AAnimal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int main()
{
	AAnimal *animal[4];

	for (int i = 0; i < 2; i++)
	{
		animal[i] = new Dog();
		std::cout << std::endl;
	}

	std::cout << "=======================================" << std::endl;

	for (int i = 2; i < 4; i++)
	{
		animal[i] = new Cat();
		std::cout << std::endl;
	}

	std::cout << "=======================================" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		std::cout << animal[i]->getType() << ": ";
		animal[i]->makeSound();
	}
	
	std::cout << "=======================================" << std::endl;
	
	for (int i = 0; i < 4; i++)
	{
		if (i == 2)
			std::cout << "=======================================" << std::endl;
		else
			std::cout << std::endl;
		delete animal[i];
	}

	return (0);
}