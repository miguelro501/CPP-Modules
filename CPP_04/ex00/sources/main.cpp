#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	std::cout << std::endl;
	const Animal* j = new Dog();
	std::cout << std::endl;
	const Animal* i = new Cat();

	std::cout << "\n=============================\n" << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << "\n=============================\n" << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "\n=============================\n" << std::endl;

	const WrongAnimal* w = new WrongCat();

	std::cout << "\n=============================\n" << std::endl;

	std::cout << w->getType() << " " << std::endl;

	std::cout << "\n=============================\n" << std::endl;

	w->makeSound();

	return 0;
}