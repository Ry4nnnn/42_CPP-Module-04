#include "Animal.hpp"

Animal::Animal() {
	cout << "[Animal] default constructor function called." << endl;
}

Animal::Animal(const Animal &animal) {
	cout << "[Animal] copy constructor function called." << endl;
	*this = animal;
}

Animal	&Animal::operator=(const Animal &animal) {
	cout << "[Animal] copy assignment operator function called." << endl;
	this->type = animal.type;
	return (*this);
}

Animal::~Animal() {
	cout << "[Animal] destructor function called." << endl;
}

/* getter function for type of Animal class */
std::string Animal::get_type() const {
	return (this->type);
}

void	Animal::makeSound() const {
	cout << "[Animal] does not make sound." << endl;
}
