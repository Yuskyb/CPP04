#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain generate" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "empty"; 
}

Brain::Brain(const Brain& other)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i]; 
	std::cout << "Brain copy" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i]; 
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destroy" << std::endl;
}