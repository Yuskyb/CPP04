#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>



class Cure : public AMateria
{
	public:

	Cure();
	~Cure();
	Cure& operator=(Cure& other);
	AMateria* clone(void) const;
	void use(ICharacter& target);
};
