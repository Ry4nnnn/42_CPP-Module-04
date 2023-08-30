#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	this->_size = 0;
}

MateriaSource::MateriaSource(const MateriaSource &a) {
	this->_size = a._size;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &a) {
	this->_size = a._size;
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] != NULL)
			delete (this->_materia[i]);
}

void	MateriaSource::learnMateria(AMateria *aMateria) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] == NULL) {
			this->_materia[i] = aMateria;
			break;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] == NULL)
			break;
		if (this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	return (0);
}
