#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

using std::cout;
using std::endl;

class AAnimal {
	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(const AAnimal &A);
		AAnimal	&operator=(const AAnimal &A);
		virtual ~AAnimal();
		std::string get_type() const;
		virtual void makeSound() const;
};

#endif