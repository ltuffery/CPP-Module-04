#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>

AMateria::AMateria(void) : type("") {
}

AMateria::AMateria(const AMateria &copy) {
	*this = copy;
}

AMateria::AMateria(std::string const &type) : type(type) {
}

AMateria::~AMateria() {
}

AMateria &AMateria::operator=(const AMateria &src) {
	if (this == &src)
		return *this;
	this->type = src.type;
	return *this;
}

std::string const &AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter &target) {
	std::cout << target.getName() << " cannot use" << std::endl;
}
