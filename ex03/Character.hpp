#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>



class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _materia[4];

public:
	Character();
	Character(const std::string& name);
	~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};
