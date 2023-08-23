#include "Character.hpp"

Character::Character() {
	
}

Character::Character(std::string name) : _name(name) {

}

Character::Character(const Character &a) {
	this->_name = a._name;
	for (int i = 0; a._inventory[i] != NULL; i++)
		_inventory[i] = a._inventory[i];
}

Character	&Character::operator=(const Character &a) {
	this->_name = a._name;
	for (int i = 0; a._inventory[i] != NULL; i++)
		_inventory[i] = a._inventory[i];
	return (*this);
}

Character::~Character() {
	for (int i = 0; _inventory[i] != NULL; i++)
		delete (_inventory[i]);
}


std::string const &Character::getName() const {
	return (_name);
}

void	Character::equip(AMateria *m) {
	for (int i = 0; i < MAX_INV; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
 				return ;
		}
	}
}

void 	Character::unequip(int idx) {
	if (idx < 0 || idx >= MAX_INV || this->_inventory[idx] == NULL)
		return ;
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx >= MAX_INV || this->_inventory[idx] == NULL)
		return ;
	this->_inventory[idx]->use(target);
}

