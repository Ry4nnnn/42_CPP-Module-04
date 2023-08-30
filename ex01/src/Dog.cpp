#include "Dog.hpp"

Dog::Dog() {
	cout << "[Dog] default constructor function called." << endl;
	this->_type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &dog) {
	// cout << "[Dog] copy constructor function called." << endl;
	this->_type = dog._type;
	brain = new Brain();
}

Dog	&Dog::operator=(const Dog &dog) {
	// cout << "[Dog] copy assignment operator function called." << endl;
	this->_type = dog._type;
	brain = new Brain();
	return (*this);
}

Dog::~Dog() {
	cout << "[Dog] destructor function called." << endl;
	delete brain;
}

void	Dog::makeSound() const {
	cout << "[Dog] make sound function called." << endl;
}
