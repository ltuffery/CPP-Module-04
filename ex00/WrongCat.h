#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.h"

class WrongCat : public WrongAnimal {
	
	public:
		WrongCat(void);
		WrongCat(const WrongCat &copy);
		~WrongCat(void);
		WrongCat &operator=(const WrongCat &cat);
		void makeSound(void) const;

};

#endif
