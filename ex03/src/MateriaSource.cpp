#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

}

MateriaSource::MateriaSource(const MateriaSource &a) {
	*this = a;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &a) {
	*this = a;
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < MAX_MAT; i++)
		if (this->_materia[i] != NULL)
			delete (this->_materia[i]);
}

void	MateriaSource::learnMateria(AMateria *aMateria) {
	for (int i = 0; i < MAX_MAT; i++) {
		if (this->_materia[i] == NULL) {
			this->_materia[i] = aMateria;
			break;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < MAX_MAT; i++) {
		if (this->_materia[i] == NULL)
			break;
		if (this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	return (0);
}
