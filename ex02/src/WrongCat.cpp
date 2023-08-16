#include "WrongCat.hpp"

WrongCat::WrongCat() {
	cout << "[WrongCat] default constructor function called." << endl;
	this->type = "WrongAnimal";
}

WrongCat::WrongCat(const WrongCat &wrongcat) {
	cout << "[WrongCat] copy constructor function called." << endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &wrongcat) {
	cout << "[WrongCat] copy assignment constructor called." << endl;
	this->type = wrongcat.type;
	return (*this);
}

WrongCat::~WrongCat() {
	cout << "[WrongCat] destructor function called." << endl;
}

void	WrongCat::makeSound() const {
	cout << "[WrongCat] WMeowww!" << endl;
}