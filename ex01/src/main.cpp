#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

#define size 10

// odd number stores Cat, even number stores Dog

int main()
{
	// Animal *array[size];

	// for (int i = 0; i < size; i++)
	// {
	// 	if (i % 2 == 0)
	// 		array[i] = new Dog();
	// 	else
	// 		array[i] = new Cat();
	// }
	// for (int i= 0; i < size; i++)
	// 	delete array[i];

	Cat *ori_cat = new Cat();
	Cat *copy_cat = new Cat(*ori_cat);

	ori_cat->makeSound();
	copy_cat->makeSound();

	delete ori_cat;

	copy_cat->makeSound();
	// ori_cat->makeSound();

	return 0;
}
