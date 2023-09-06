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
	this->brain = new Brain();
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
	delete this->brain;
	this->type = dog.type;
	this->brain = new Brain(*dog.brain);
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "Wouaf" << std::endl;
}
