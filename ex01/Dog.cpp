#include "Dog.h"
#include "Animal.h"
#include "Brain.h"
#include <iostream>

Dog::Dog(void) {
	std::cout << "Dog constructor" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	std::cout << "Dog copy constructor" << std::endl;
	*this = copy;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor" << std::endl;
	delete this->brain;
}

Dog &Dog::operator=(const Dog &dog) {
	std::cout << "Dog operator" << std::endl;
	if (this == &dog)
		return *this;
	this->type = dog.type;
	this->brain = dog.brain;
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "Wouaf" << std::endl;
}