#include "Dog.h"
#include "Animal.h"
#include <iostream>

Dog::Dog(void) {
	std::cout << "Dog constructor" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	std::cout << "Dog copy constructor" << std::endl;
	*this = copy;
}

Dog::~Dog(void) {
}

Dog &Dog::operator=(const Dog &dog) {
	std::cout << "Dog operator" << std::endl;
	if (this == &dog)
		return *this;
	this->type = dog.type;
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "Wouaf" << std::endl;
}
