#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class Character : virtual public ICharacter {
	
	public:
		Character(void);
		Character(const Character &copy);
		Character(const std::string &name);
		~Character(void);

		Character &operator=(const Character &src);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria *getInventory(int slot);

	private:
		std::string _name;
		AMateria *inventory[4];

};

#endif
