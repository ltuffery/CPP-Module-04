#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Cure : public AMateria {

	public:
		Cure(void);
		Cure(const Cure &copy);
		~Cure(void);

		Cure &operator=(const Cure &src);

		void use(ICharacter &target);
		AMateria* clone() const;

};

#endif
