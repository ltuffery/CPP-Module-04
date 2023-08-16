#ifndef CAT_H
# define CAT_H

# include "Animal.h"

class Cat : public Animal {
	
	public:
		Cat(void);
		Cat(const Cat &copy);
		~Cat(void);
		Cat &operator=(const Cat &cat);
		void makeSound(void) const;

};

#endif
