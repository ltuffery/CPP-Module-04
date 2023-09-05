#include "Cat.h"
#include "Animal.h"
#include "Brain.h"
#include <iostream>

Cat::Cat(void) {
	std::cout << "Cat constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy) {
	std::cout << "Cat copy constructor" << std::endl;
	this->brain = new Brain();
	*this = copy;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor" << std::endl;
	delete this->brain;
}

Cat &Cat::operator=(const Cat &cat) {
	std::cout << "Cat operator" << std::endl;
	if (this == &cat)
		return *this;
	delete this->brain;
	this->type = cat.type;
	this->brain = cat.brain;
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "Mow" << std::endl;
}
