#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat generate" << std::endl;
}

Cat::Cat(const Cat& other) : Animal("Cat"), _brain(new Brain(*other._brain))
{
	std::cout << "Cat copy" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		this->_type = other._type;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "nya-nya-" << std::endl;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << _type << ": Cat destroy" << std::endl;
}