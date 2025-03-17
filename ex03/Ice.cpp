#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

AMateria* Ice::clone(void) const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "Ice: '* shoots an ice bolt at " << target.getName() << std::endl;
}

Ice& Ice::operator=(Ice& other)
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

Ice::~Ice() {};
