#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

// int main()
// {
// 	{
// 		std::cout << "\n---------- EX00 Main ----------\n" << std::endl;
// 		const Animal* meta = new Animal();
// 		const Animal* j = new Dog();
// 		const Animal* i = new Cat();

// 		std::cout << j->get_type() << " " << std::endl;
// 		std::cout << i->get_type() << " " << std::endl;
// 		i->makeSound(); //will output the cat sound!
// 		j->makeSound();
// 		meta->makeSound();
// 		delete (meta);
// 		delete (j);
// 		delete (i);
// 	}
// 	{
// 		std::cout << "\n---------- EX00 Test ----------\n" << std::endl;
// 		const WrongAnimal* w_animal = new WrongAnimal();
// 		const WrongAnimal* w_cat = new WrongCat();
		
// 		std::cout << w_animal->get_type() << std::endl;
// 		std::cout << w_cat->get_type() << std::endl;
// 		w_animal->makeSound();
// 		w_cat->makeSound();
// 		delete (w_animal);
// 		delete (w_cat);
// 	}
// 	return (0);
// }


int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j;
	delete i;
	return 0;
}