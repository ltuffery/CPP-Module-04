#ifndef WRONGANIMAl_H
# define WRONGANIMAl_H

#include <string>

class WrongAnimal {

	protected:
		std::string type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &copy);
		~WrongAnimal(void);
		WrongAnimal &operator=(const WrongAnimal &animal);
		std::string getType(void) const;
		void makeSound(void) const;

};

#endif
