#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"


MateriaSource::MateriaSource() {};

MateriaSource::~MateriaSource() {};

MateriaSource& MateriaSource::operator=(MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (other._materia[i] == NULL)
				_materia[i] = NULL;
			else
				_materia[i] = other._materia[i];
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			_materia[i] = materia;
			return ;
		}
	}
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
			continue ;
		if (this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	return (NULL);
}
