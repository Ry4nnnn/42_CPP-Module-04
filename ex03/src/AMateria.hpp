#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

using std::cout;
using std::endl;

class ICharacter;

class AMateria {
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &a);
		AMateria	&operator=(const AMateria &a);
		virtual	~AMateria();

		std::string const	&getType() const; // returns the materia type;
		virtual	AMateria	*clone() const = 0;
		virtual void	use(ICharacter &target);
};

#endif
