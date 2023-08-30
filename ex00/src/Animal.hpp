#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

using std::cout;
using std::endl;

class Animal {
	protected:
		std::string _type;

	public:
		Animal();
		Animal(const Animal &animal);
		Animal	&operator=(const Animal &animal);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() const;
};

#endif
