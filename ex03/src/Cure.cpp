#include "Cure.hpp"

Cure::Cure() {
	this->_type = "cure";
}

Cure::Cure(const Cure &a) : AMateria(a) {
	this->_type = a._type;
}

Cure	&Cure::operator=(const Cure &a) {
	this->_type = a._type;
	return (*this);
}

Cure::~Cure() {

}

/* this function creates and return a new instance of the the class Cure 
it calls the copy constructor */
AMateria	*Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target) {
	cout << "* heals " << target.getName() << "'s wounds *" << endl;
}
