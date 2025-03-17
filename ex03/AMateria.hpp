#pragma once

#include <string>
#include "ICharacter.hpp"
#include <iostream>


class ICharacter;

class AMateria
{
protected:
	std::string _type;

public:
	AMateria();
	AMateria(std::string const &type);
	virtual ~AMateria();
	std::string const & getType() const;
	AMateria& operator=(AMateria& other);
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
