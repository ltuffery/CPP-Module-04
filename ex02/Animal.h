#ifndef ANIMAL_H
# define ANIMAL_H

#include <string>

class Animal {

	protected:
		std::string type;

	public:
		Animal(void);
		Animal(const Animal &copy);
		virtual ~Animal(void);
		Animal &operator=(const Animal &animal);
		std::string getType(void) const;
		virtual void makeSound(void) const = 0;

};

#endif
