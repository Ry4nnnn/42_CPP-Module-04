#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main(void)
{
    IMateriaSource *src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter *human = new Character("human");

    AMateria *tmp;

    tmp = src->createMateria("ice");
    human->equip(tmp);

    tmp = src->createMateria("cure");
    human->equip(tmp);

    ICharacter *bob = new Character("bob");

    human->use(0, *bob);
    human->use(1, *bob);
    delete bob;
    delete human;
    delete src;
    return 0;
}