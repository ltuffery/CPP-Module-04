#include "Cat.h"
#include "Animal.h"
#include <iostream>

Cat::Cat(void) {
	std::cout << "Cat constructor" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal(copy) {
	std::cout << "Cat copy constructor" << std::endl;
	*this = copy;
}

Cat::~Cat(void) {
}

Cat &Cat::operator=(const Cat &cat) {
	std::cout << "Cat operator" << std::endl;
	if (this == &cat)
		return *this;
	this->type = cat.type;
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "Mow" << std::endl;
}
