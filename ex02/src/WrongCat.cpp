#include "WrongCat.hpp"

WrongCat::WrongCat() {
	cout << "[WrongCat] default constructor function called." << endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &wrongcat) {
	// cout << "[WrongCat] copy constructor function called." << endl;
	this->_type = wrongcat._type;
}

WrongCat	&WrongCat::operator=(const WrongCat &wrongcat) {
	// cout << "[WrongCat] copy assignment constructor called." << endl;
	this->_type = wrongcat._type;
	return (*this);
}

WrongCat::~WrongCat() {
	cout << "[WrongCat] destructor function called." << endl;
}

void	WrongCat::makeSound() const {
	cout << "[WrongCat] make sound function called." << endl;
}
