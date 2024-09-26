#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat generate" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other._type)
{
	std::cout << "Cat copy" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

const std::string& Cat::getType(void) const
{
	return (this->_type);
}

void Cat::setType(const std::string& type)
{
	this->_type = type;
}


void	Cat::makeSound(void) const
{
	std::cout << "nya-nya-" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << _type << ": Cat destroy" << std::endl;
}