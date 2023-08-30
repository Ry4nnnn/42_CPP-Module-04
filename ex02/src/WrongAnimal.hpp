#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

using std::cout;
using std::endl;

class WrongAnimal {
	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &animal);
		WrongAnimal	&operator=(const WrongAnimal &animal);
		~WrongAnimal();
		std::string getType() const;
		void makeSound() const;
};

#endif
