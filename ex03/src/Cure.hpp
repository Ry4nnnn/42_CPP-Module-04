#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria {
	protected:
		std::string	_type;

	public:
		Ice();
		Ice(std::string name);
		~Ice();

};

#endif