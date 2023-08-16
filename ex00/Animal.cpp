#include "Animal.h"
#include <string>
#include <iostream>

Animal::Animal(void) {
	std::cout << "Animal constructor" << std::endl;
	this->type = "null";
}

Animal::Animal(const Animal &copy) {
	std::cout << "Animal copy constructor" << std::endl;
	*this = copy;
}

Animal::~Animal() {
}

Animal &Animal::operator=(const Animal &animal) {
	std::cout << "Animal operator" << std::endl;
	if (this == &animal)
		return *this;
	this->type = animal.type;
	return *this;
}

std::string Animal::getType(void) const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "Not sound" << std::endl;
}
