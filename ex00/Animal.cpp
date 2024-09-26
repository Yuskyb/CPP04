#include "Animal.hpp"

Animal::Animal() : _type("default")
{
	std::cout <<"Animal generate" << std::endl;
}

Animal::Animal(const std::string& type) : _type(type)
{
	std::cout <<"Animal generate" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type)
{
	std::cout << "Animal copy" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

const std::string& Animal::getType(void) const
{
	return (_type);
}

void Animal::setType(const std::string& type)
{
	this->_type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal Sound" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << _type << ": Animal destroy" << std::endl;
}