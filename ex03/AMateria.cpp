#include "AMateria.hpp"
#include <string>

AMateria::AMateria(void) : type("") {
}

AMateria::AMateria(const AMateria &copy) {
	*this = copy;
}

AMateria::AMateria(std::string const &type) : type(type) {
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
}
