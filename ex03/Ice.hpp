#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Ice : public AMateria
{
	public:
	Ice();
	Ice(std::string const &type);
	~Ice();
	Ice& operator=(Ice& other);
	AMateria* clone(void) const;
	void use(ICharacter& target);
};
