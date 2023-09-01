#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &a) {
	for (int i = 0; i < 4; i++)
		this->_materia[i] = a._materia[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &a) {
	if (this != &a)
	{
		for (int i = 0; i < 4; i++)
			this->_materia[i] = a._materia[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource() {

}

void	MateriaSource::learnMateria(AMateria *m) {
	if (m == NULL)
		cout << "Learn Materia failed! Materia to learn does not exist." << endl;
	else
	{
		int i;
		for (i = 0; i < 4; i++) {
			if (this->_materia[i] == NULL) {
				this->_materia[i] = m;
				break;
			}
		}
		if (i == 4)
			cout << "Learn Materia failed! Materia is full." << endl;
		else
			cout << "Learn Materia successful!" << endl;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	int i;
	
	for (i = 0; i < 4; i++)
	{
		if (this->_materia[i] != NULL && (this->_materia[i]->getType() == type))
		{
			cout << "Create Materia successful!" << endl;
			return (this->_materia[i]);
		}
	}
	if (i == 4)
		cout << "Create Materia failed!" << endl;
	return (0);
}
