#ifndef DOG_H
# define DOG_H

# include "Animal.h"

class Dog : public Animal {
	
	public:
		Dog(void);
		Dog(const Dog &copy);
		~Dog(void);
		Dog &operator=(const Dog &dog);
		void makeSound(void) const;

};

#endif
