#include "Character.hpp"

Character::Character() {
	this->_name = "undefined";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name) {
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character &a) {
	this->_name = a._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = a._inventory[i];
}

Character	&Character::operator=(const Character &a) {
	if (this != &a)
	{
		Character *temp = new Character(a._name);
		for (int i = 0; i < 3; i++)
			if (a._inventory[i] != NULL)
				temp->_inventory[i] = a._inventory[i];
		return (*temp);
	}
	return (*this);
}

Character::~Character() {

}

std::string const &Character::getName() const {
	return (_name);
}

void	Character::equip(AMateria *m) {
	if (m == NULL)
		cout << "Equip failed! Materia does not exist." << endl;
	else
	{
		int i;
		for (i = 0; i < 4; i++) {
			if (this->_inventory[i] == NULL) {
				this->_inventory[i] = m;
				break;
			}
		}
		if (i == 4)
			cout << "Equip failed! Materia inventory is full." << endl;
		else
			cout << "Equip successful!" << endl;
	}
}

void 	Character::unequip(int idx) {
	if (idx < 0 || idx >= 4 || this->_inventory[idx] == NULL)
		cout << "Unequip failed! Materia inventory slot[" << idx << "] does not exist." << endl;
	else
	{
		// delete (this->_inventory[idx]);
		this->_inventory[idx] = NULL;
		cout << "Unequip successful!" << endl;
	}
}

void	Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx >= 4 || this->_inventory[idx] == NULL)
		cout << "Failed to use Materia! Materia inventory slot[" << idx << "] does not exist." << endl;
	else
		this->_inventory[idx]->use(target);
}
