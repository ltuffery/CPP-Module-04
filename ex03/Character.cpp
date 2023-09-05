#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

Character::Character() {
	this->_name = "default";
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
}

Character::Character(const Character &copy) {
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
	*this = copy;
}

Character::Character(const std::string &name) {
	this->_name = name;
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
}

Character &Character::operator=(const Character &src) {
	if (this == &src)
		return *this;
	this->_name = src._name;
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] != NULL) {
			delete this->inventory[i];
		}
		if (src.inventory[i] == NULL)
			this->inventory[i] = src.inventory[i];
		else
			this->inventory[i] = src.inventory[i]->clone();
	}
	return *this;
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return;
	if (this->inventory[idx] == NULL)
		return;

	this->inventory[idx] = NULL;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] == m)
			return;
	}
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] == NULL) {
			this->inventory[i] = m;
			break;
		}
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3)
		return;
	if (this->inventory[idx] == NULL)
		return;

	this->inventory[idx]->use(target);
}

AMateria *Character::getInventory(int slot) {
	if (slot < 0 || slot > 3)
		return NULL;
	return this->inventory[slot];
}
