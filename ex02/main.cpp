#include "Animal.h"
#include "WrongAnimal.h"
#include "WrongCat.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>

int main()
{
	std::cout << "\nTest 1\n" << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();

		std::cout << "-------------------" << std::endl;

		const WrongAnimal* wrongAnimal = new WrongAnimal();
		const WrongAnimal* wrongCat = new WrongCat();

		std::cout << wrongAnimal->getType() << std::endl;
		std::cout << wrongCat->getType() << std::endl;
		wrongAnimal->makeSound();
		wrongCat->makeSound();

		delete j;
		delete i;
		delete wrongAnimal;
		delete wrongCat;
	}
	std::cout << "\nTest 2\n" << std::endl;
	{
		Animal *tabs[10];

		for (int i = 0; i < 5; i++) {
			tabs[i] = new Dog();
		}
		for (int i = 0; i < 5; i++) {
			tabs[5 + i] = new Cat();
		}
		for (int i = 0; i < 10; i++) {
			delete tabs[i];
		}
	}
	std::cout << "\nTest 3\n" << std::endl;
	{
		Dog a;
		Dog b(a);
	}
	return 0;
}
