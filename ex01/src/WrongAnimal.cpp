#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	cout << "[WrongAnimal] default constructor function called." << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal) {
	cout << "[WrongAnimal] copy constructor function called." << endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wronganimal) {
	cout << "[WrongAnimal] copy assignment constructor called." << endl;
	this->type = wronganimal.type;
	return (*this);
}

std::string	WrongAnimal::get_type() const {
	return (this->type);
}

WrongAnimal::~WrongAnimal() {
	cout << "[WrongAnimal] destructor function called." << endl;
}

void	WrongAnimal::makeSound() const {
	cout << "[WrongAnimal] does not make sound!" << endl;
}