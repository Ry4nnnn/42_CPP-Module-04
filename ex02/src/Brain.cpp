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
	for (int i = 0; i < IDEAS; i++)
		this->_ideas[i] = brain._ideas[i];
	return (*this);
}

Brain::~Brain() {
	cout << "[Brain] destructor function called." << endl;
}
