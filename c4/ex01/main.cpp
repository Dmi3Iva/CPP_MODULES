#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j; //should not create a leak
	delete i;

	std::cout << std::endl;

	Animal **arrayOfAnimals = new Animal*[4];
	arrayOfAnimals[0] = new Dog();
	arrayOfAnimals[1] = new Dog();
	arrayOfAnimals[2] = new Cat();
	arrayOfAnimals[3] = new Cat();

	std::cout << std::endl << "clear objects" << std::endl;

	for (int i = 0; i < 4; ++i)
		delete arrayOfAnimals[i];
	delete [] arrayOfAnimals;

	std::cout << std::endl << std::endl;

	{
		std::cout << std::endl << " To prove that clone is deep let's compare " <<
		"addresses" << std::endl;

		std::cout << "Compare two dog objects: dog and tmp cloned from dog" <<
		std::endl;
		Dog dog;
		Dog tmp = dog;

		std::cout << "Addresses of brains:" << std::endl;
		std::cout << "dog: " << dog.getBrain()<< std::endl;
		std::cout << "tmp: " << tmp.getBrain()<< std::endl;

		std::cout << "Addresses of first four ideas:" << std::endl;
		for (int i = 0; i < 4; ++i)
		{
			std::cout << "dog: " << &dog.getBrain()->getIdeas()[i]<< std::endl;
			std::cout << "tmp: " << &tmp.getBrain()->getIdeas()[i]<< std::endl;
		}
	}

	std::cout << std::endl << std::endl;

	{
		std::cout << "Compare two cat objects: cat and tmp cloned from dog" <<
		std::endl;
		Cat cat;
		Cat tmp = cat;

		std::cout << "Addresses of brains:" << std::endl;
		std::cout << "cat: " << cat.getBrain()<< std::endl;
		std::cout << "tmp: " << tmp.getBrain()<< std::endl;

		std::cout << "Addresses of first four ideas:" << std::endl;
		for (int i = 0; i < 4; ++i)
		{
			std::cout << "cat: " << &cat.getBrain()->getIdeas()[i]<< std::endl;
			std::cout << "tmp: " << &tmp.getBrain()->getIdeas()[i]<< std::endl;
		}
	}
	return 0;
}
