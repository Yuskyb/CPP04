#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
    Animal *animal[10];
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }
    for (int i = 0; i < 10; i++)
    {
        animal[i]->makeSound();
        delete animal[i];
    }
    return (0);
}