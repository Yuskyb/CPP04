#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog generate" << std::endl;
}

Dog::Dog(const Dog& other) : Animal("Dog"), _brain(new Brain(*other._brain))
{
	std::cout << "Dog copy" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		this->_type = other._type;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "bowwow" << std::endl;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << _type << ": Dog destroy" << std::endl;
}