#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria(std::string const & type);
		AMateria(void);
		AMateria(const AMateria &copy);
		virtual ~AMateria(void);

		AMateria &operator=(const AMateria &src);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
