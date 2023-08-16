#include "Animal.hpp"

AAnimal::AAnimal() {
	cout << "[Animal] default constructor function called." << endl;
}

AAnimal::AAnimal(const AAnimal &A) {
	cout << "[Animal] copy constructor function called." << endl;
	*this = A;
}

AAnimal	&AAnimal::operator=(const AAnimal &A) {
	cout << "[Animal] copy assignment operator function called." << endl;
	this->type = A.type;
	return (*this);
}

AAnimal::~AAnimal() {
	cout << "[Animal] destructor function called." << endl;
}

/* getter function for type of AAnimal class */
std::string AAnimal::get_type() const {
	return (this->type);
}

void	AAnimal::makeSound() const {
	cout << "[Animal] does not make sound." << endl;
}
