#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *ani = new Animal();
	Animal *dog = new Dog();
	Animal *cat = new Cat();

	ani->makeSound();
	dog->makeSound();
	cat->makeSound();
	delete ani;
	delete dog;
	delete cat;
	return (0);
}