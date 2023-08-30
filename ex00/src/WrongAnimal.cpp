#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	cout << "[WrongAnimal] default constructor function called." << endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal) {
	// cout << "[WrongAnimal] copy constructor function called." << endl;
	this->_type = wronganimal._type;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wronganimal) {
	// cout << "[WrongAnimal] copy assignment constructor called." << endl;
	this->_type = wronganimal._type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	cout << "[WrongAnimal] destructor function called." << endl;
}

std::string	WrongAnimal::getType() const {
	return (this->_type);
}

void	WrongAnimal::makeSound() const {
	cout << "[WrongAnimal] make sound function called." << endl;
}
