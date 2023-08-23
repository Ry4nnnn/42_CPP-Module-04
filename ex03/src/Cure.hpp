#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(const Cure &a);
		Cure	&operator=(const Cure &a);
		~Cure();

		AMateria *clone() const;
		void	use(ICharacter &target);
};

#endif