#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Ice : public AMateria {

	public:
		Ice(void);
		Ice(const Ice &copy);
		~Ice(void);

		Ice &operator=(const Ice &src);

		void use(ICharacter &target);

};

#endif
