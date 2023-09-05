#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(const Ice &copy) : AMateria(copy) {
	*this = copy;
}

Ice::~Ice() {
}

Ice &Ice::operator=(const Ice &src) {
	if (this == &src)
		return *this;
	this->type = src.type;
	return *this;
}

void Ice::use(ICharacter &target) {
	std::cout << "Ice : \"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
}

AMateria *Ice::clone() const {
	return new Ice();
}
