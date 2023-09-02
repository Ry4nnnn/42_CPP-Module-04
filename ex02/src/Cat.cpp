#include "Cat.hpp"

Cat::Cat() {
	cout << "[Cat] default constructor function called." << endl;
	this->_type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &cat) : Animal(cat) {
	// cout << "[Cat] copy constructor function called." << endl;
	this->_type = cat._type;
	brain = new Brain();
}

Cat	&Cat::operator=(const Cat &cat) {
	// cout << "[Cat] copy assignment operator function called." << endl;
	this->_type = cat._type;
	brain = new Brain();
	return (*this);
}

Cat::~Cat() {
	cout << "[Cat] destructor function called." << endl;
	delete brain;
}

void	Cat::makeSound() const {
	cout << "[Cat] make sound function called." << endl;
}
