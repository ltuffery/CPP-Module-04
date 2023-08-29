#ifndef CAT_H
# define CAT_H

# include "Animal.h"
# include "Brain.h"

class Cat : public Animal {
	
	private:
		Brain *brain;

	public:
		Cat(void);
		Cat(const Cat &copy);
		~Cat(void);
		Cat &operator=(const Cat &cat);
		void makeSound(void) const;

};

#endif
