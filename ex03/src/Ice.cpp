#include "Ice.hpp"

Ice::Ice() {
	this->_type = "ice";
}

Ice::Ice(const Ice &a) {
	this->_type = a._type;
}

Ice	&Ice::operator=(const Ice &a) {
	this->_type = a._type;
	return (*this);
}

Ice::~Ice() {

}

/* this function creates and return a new instance of the the class Ice 
it calls the copy constructor */
AMateria	*Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target) {
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}
