#include "Character.hpp"

Character::Character() {};

Character::~Character() {};

Character::Character(const std::string& name) : _name(name) {};

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] == NULL)
		{
			_materia[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 4)
		this->_materia[idx] = NULL;
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_materia[idx] == NULL)
		return ;
	this->_materia[idx]->use(target);
	return ;
}
