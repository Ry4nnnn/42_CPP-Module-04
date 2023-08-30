#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

#define size 1

// odd number stores Cat, even number stores Dog

int main()
{
	Animal *array[size];

	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	for (int i= 0; i < size; i++)
		delete array[i];

	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// delete j;
	// delete i;
	return 0;
}
