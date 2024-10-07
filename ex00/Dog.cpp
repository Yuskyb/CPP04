#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Doc generate" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other._type)
{
	std::cout << "Dog copy" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

const std::string& Dog::getType(void) const
{
	return (this->_type);
}

void Dog::setType(const std::string& type)
{
	this->_type = type;
}

void	Dog::makeSound(void) const
{
	std::cout << "bowwow" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destroy" << std::endl;
}