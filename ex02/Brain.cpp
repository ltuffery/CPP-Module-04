#include "Brain.h"
#include <iostream>

Brain::Brain(void) {
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(const Brain &copy) {
	std::cout << "Brain copy constructor" << std::endl;
	*this = copy;
}

Brain::~Brain() {
	std::cout << "Brain destructor" << std::endl;
}

Brain &Brain::operator=(const Brain &brain) {
	std::cout << "Brain operator" << std::endl;
	if (this == &brain)
		return *this;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = brain.ideas[i];
	}
	return *this;
}
