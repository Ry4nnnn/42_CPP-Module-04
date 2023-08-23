#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

# define MAX_INV 4

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria	*_inventory[MAX_INV];

	public:
		Character();
		Character(std::string name);
		Character(const Character &a);
		Character	&operator=(const Character &a);
		~Character();

		std::string	const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif