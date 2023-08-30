#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

using std::cout;
using std::endl;

class 	Brain {
	private:
		std::string	_ideas[100];

	public:
		Brain();
		Brain(const Brain &brain);
		Brain	&operator=(const Brain &animal);
		~Brain();
};

#endif
