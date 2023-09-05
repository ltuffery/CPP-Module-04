#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		~MateriaSource();

		MateriaSource &operator=(const MateriaSource &src);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria *memory[4];

};

#endif
