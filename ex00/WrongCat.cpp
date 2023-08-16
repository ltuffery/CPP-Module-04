#include "WrongCat.h"
#include "WrongAnimal.h"
#include <iostream>

WrongCat::WrongCat(void) {
	std::cout << "WrongCat constructor" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {
	std::cout << "Cat copy constructor" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat(void) {
}

WrongCat &WrongCat::operator=(const WrongCat &cat) {
	std::cout << "Cat operator" << std::endl;
	if (this == &cat)
		return *this;
	this->type = cat.type;
	return *this;
}

void WrongCat::makeSound(void) const {
	std::cout << "Mow" << std::endl;
}
