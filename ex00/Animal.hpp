#pragma once

#include <iostream>

class Animal {
	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(const Animal& other);
		Animal(const std::string& type);
		const std::string& getType(void) const;
		void setType(const std::string& type);
		Animal& operator=(const Animal& other);
		virtual void makeSound() const;
		virtual ~Animal(void);
};
