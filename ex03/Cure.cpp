#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {};

AMateria* Cure::clone(void) const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "Cure: '* heals "<< target.getName() << "'s wonds *' " << std::endl;
}

Cure& Cure::operator=(Cure& other)
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

Cure::~Cure() {};
