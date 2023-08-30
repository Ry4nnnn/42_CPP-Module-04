#include "AMateria.hpp"

AMateria::AMateria() {
	this->_type = "undefined";
}

AMateria::AMateria(std::string const &type) {
	this->_type = type;
}

AMateria::AMateria(const AMateria &a) {
	this->_type = a._type;
}

AMateria	&AMateria::operator=(const AMateria &a) {
	this->_type = a._type;
	return (*this);
}

AMateria::~AMateria() {

}

std::string const &AMateria::getType() const {
	return (this->_type);
}

void	AMateria::use(ICharacter &target) {
	(void) target;
}
