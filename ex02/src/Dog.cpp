#include "Dog.hpp"

Dog::Dog() {
	cout << "[Dog] default constructor function called." << endl;
	this->B = new Brain();
	this->type = "Dog";
}

Dog::Dog(const Dog &dog) {
	cout << "[Dog] copy constructor function called." << endl;
	*this = dog;
}

Dog	&Dog::operator=(const Dog &dog) {
	cout << "[Dog] copy assignment operator function called." << endl;
	this->type = dog.type;
	return (*this);
}

Dog::~Dog() {
	cout << "[Dog] destructor function called." << endl;
	delete (this->B);
}

void	Dog::makeSound() const {
	cout << "[Dog] Woof!!!" << endl;
}