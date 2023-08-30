#include "Brain.hpp"

Brain::Brain() {
	cout << "[Brain] default constructor function called." << endl;
}

Brain::Brain(const Brain &brain) {
	cout << "[Brain] copy constructor function called." << endl;
	*this = brain;
}

Brain	&Brain::operator=(const Brain &brain) {
	cout << "[Brain] copy assignment operator function called." << endl;
	std::copy(std::begin(brain._ideas), std::end(brain._ideas), _ideas);
	return (*this);
}

Brain::~Brain() {
	cout << "[Brain] destructor function called." << endl;
}
