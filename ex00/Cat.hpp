#pragma once

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		Cat(const Cat& other);
		const std::string& getType(void) const;
		void setType(const std::string& type);
		Cat& operator=(const Cat& other);
		void makeSound() const;
		~Cat(void);
};
