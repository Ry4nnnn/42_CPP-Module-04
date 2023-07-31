#include "Cat.hpp"

Cat::Cat() {
	cout << "[Cat] default constructor function called." << endl;
}

Cat::Cat(const Cat &cat) {
	cout << "[Cat] copy constructor function called." << endl;
	*this = cat;
}

Cat	&Cat::operator=(const Cat &cat) {
	cout << "[Cat] copy assignment operator function called." << endl;
	this->type = cat.type;
	return (*this);
}

Cat::~Cat() {
	cout << "[Cat] destructor function called." << endl;
}
