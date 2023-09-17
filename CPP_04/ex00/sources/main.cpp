#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* a = new Animal();
	std::cout << std::endl;
	const Animal* d = new Dog();
	std::cout << std::endl;
	const Animal* c = new Cat();

	std::cout << "\n=============================\n" << std::endl;

	std::cout << a->getType() << " ";
	a->makeSound();
	std::cout << d->getType() << " ";
	d->makeSound();
	std::cout << c->getType() << " ";
	c->makeSound(); 
	std::cout << "\n=============================\n" << std::endl;

	const WrongAnimal* w = new WrongCat();

	std::cout << "\n=============================\n" << std::endl;

	std::cout << w->getType() << " ";
	w->makeSound();

	std::cout << "\n=============================\n" << std::endl;


	return 0;
}