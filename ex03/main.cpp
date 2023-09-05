#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include <iostream>

int main()
{
	{
		std::cout << "\nTest01\n" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << "\nTest02\n" << std::endl;
		Character *me = new Character("me");
		for (int i = 0; i < 4; i++) {
			me->equip(new Cure());
		}
		Ice *ice = new Ice();
		me->equip(ice);
		for (int i = 0; i < 4; i++) {
			me->use(i, *me);
		}
		delete ice;
		delete me;
	}
	{
		std::cout << "\nTest03\n" << std::endl;
		Character *me = new Character("me");

		me->equip(new Ice());
		Character you(*me);
		delete me;
		std::cout << you.getName() << std::endl;
		for (int i = 0; i < 4; i++) {
			you.use(i, you);
		}
	}
	{
		std::cout << "\nTest04\n" << std::endl;
		MateriaSource *source = new MateriaSource();

		source->learnMateria(new Cure());
		MateriaSource materia(*source);
		delete source;
	}
	{
		std::cout << "\nTest05\n" << std::endl;
		Character me("me");
		AMateria *ice = new Ice();

		me.equip(ice);
		me.unequip(12);
		me.unequip(-56);
		std::cout << me.getInventory(0)->getType() << std::endl;
		me.unequip(0);
		if (me.getInventory(0) == NULL)
			std::cout << "null" << std::endl;
		delete ice;
	}
	return 0;
}
