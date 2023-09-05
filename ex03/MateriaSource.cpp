#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		this->memory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	for (int i = 0; i < 4; i++) {
		this->memory[i] = NULL;
	}
	*this = copy;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->memory[i] != NULL)
			delete this->memory[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src) {
	if (this == &src)
		return *this;
	for (int i = 0; i < 4; i++) {
		if (this->memory[i] != NULL) {
			delete this->memory[i];
		}
		if (src.memory[i] == NULL)
			this->memory[i] = src.memory[i];
		else
			this->memory[i] = src.memory[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < 4; i++) {
		if (this->memory[i] == materia)
			return;
	}
	for (int i = 0; i < 4; i++) {
		if (this->memory[i] == NULL) {
			this->memory[i] = materia;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; i++) {
		if (this->memory[i] == NULL)
			continue;
		if (this->memory[i]->getType() == type)
			return this->memory[i]->clone();
	}
	return 0;
}
