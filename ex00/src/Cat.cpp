#include "Cat.hpp"

Cat::Cat() {
	cout << "[Cat] default constructor function called." << endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &cat) {
	// cout << "[Cat] copy constructor function called." << endl;
	this->_type = cat._type;
}

Cat	&Cat::operator=(const Cat &cat) {
	// cout << "[Cat] copy assignment operator function called." << endl;
	this->_type = cat._type;
	return (*this);
}

Cat::~Cat() {
	cout << "[Cat] destructor function called." << endl;
}

void	Cat::makeSound() const {
	cout << "[Cat] make sound function called." << endl;
}
