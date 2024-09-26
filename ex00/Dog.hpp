#pragma once

#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		const std::string& getType(void) const;
		void setType(const std::string& type);
		void makeSound() const;
		~Dog(void);
};
