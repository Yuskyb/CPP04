#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <iostream>


class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materia[4];

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource& operator=(MateriaSource& other);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};
