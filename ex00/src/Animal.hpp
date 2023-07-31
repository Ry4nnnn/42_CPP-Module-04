#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

using std::cout;
using std::endl;

class Animal {
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal &animal);
		Animal	&operator=(const Animal &animal);
		~Animal();
		std::string get_type();
};

#endif