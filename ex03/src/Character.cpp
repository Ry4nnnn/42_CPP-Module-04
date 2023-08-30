#include "Character.hpp"

Character::Character() {
	this->_name = "undefined";
	this->_sz = 0;
}

Character::Character(std::string name) {
	this->_name = name;
}

Character::Character(const Character &a) {
	this->_name = a._name;
	for (int i = 0; a._inventory[i] != NULL; i++)
		_inventory[i] = a._inventory[i];
	this->_sz = a._sz;
}

Character	&Character::operator=(const Character &a) {
	this->_name = a._name;
	for (int i = 0; a._inventory[i] != NULL; i++)
		_inventory[i] = a._inventory[i];
	return (*this);
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] != NULL)
			delete (this->_inventory[i]);
}


std::string const &Character::getName() const {
	return (_name);
}

void	Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
 				return ;
		}
	}
}

void 	Character::unequip(int idx) {
	if (idx < 0 || idx >= 4 || this->_inventory[idx] == NULL)
		return ;
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx >= 4 || this->_inventory[idx] == NULL)
		return ;
	this->_inventory[idx]->use(target);
}
