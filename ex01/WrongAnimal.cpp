#include "WrongAnimal.h"
#include <string>
#include <iostream>

WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal constructor" << std::endl;
	this->type = "null";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	std::cout << "WrongAnimal copy constructor" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal) {
	std::cout << "WrongAnimal operator" << std::endl;
	if (this == &animal)
		return *this;
	this->type = animal.type;
	return *this;
}

std::string WrongAnimal::getType(void) const {
	return this->type;
}

void WrongAnimal::makeSound() const {
	std::cout << "Not sound" << std::endl;
}
