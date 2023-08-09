#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

using std::cout;
using std::endl;

#define IDEAS 100

class 	Brain {
	private:
		std::string	_ideas[IDEAS];

	public:
		Brain();
		Brain(const Brain &brain);
		Brain	&operator=(const Brain &animal);
		~Brain();
		void	setIdea(std::string idea);
};

#endif