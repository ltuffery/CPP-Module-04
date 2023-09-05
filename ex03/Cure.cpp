#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(const Cure &copy) : AMateria(copy) {
	*this = copy;
}

Cure::~Cure() {
}

Cure &Cure::operator=(const Cure &src) {
	if (this == &src)
		return *this;
	this->type = src.type;
	return *this;
}

void Cure::use(ICharacter &target) {
	std::cout << "Cure : \"* heals " << target.getName() << "’s wounds *\"" << std::endl;
}

AMateria *Cure::clone() const {
	return new Cure();
}
