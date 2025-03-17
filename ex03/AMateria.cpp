#include "AMateria.hpp"

AMateria::AMateria() : _type("default") {}

AMateria::AMateria(std::string const &type) : _type(type) {}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

AMateria& AMateria::operator=(AMateria& other)
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

void AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << std::endl;
}

AMateria::~AMateria() {};
