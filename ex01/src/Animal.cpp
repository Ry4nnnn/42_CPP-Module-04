#include "Animal.hpp"

Animal::Animal() {
	cout << "[Animal] default constructor function called." << endl;
	this->_type = "Animal";
}

Animal::Animal(const Animal &animal) {
	// cout << "[Animal] copy constructor function called." << endl;
	this->_type = animal._type;
}

Animal	&Animal::operator=(const Animal &animal) {
	// cout << "[Animal] copy assignment operator function called." << endl;
	this->_type = animal._type;
	return (*this);
}

Animal::~Animal() {
	cout << "[Animal] destructor function called." << endl;
}

/* getter function for type of Animal class */
std::string Animal::getType() const {
	return (this->_type);
}

void	Animal::makeSound() const {
	cout << "[Animal] does not make sound." << endl;
}
