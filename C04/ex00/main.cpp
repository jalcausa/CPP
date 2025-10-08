#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	const Animal *generic_animal = new Animal();
	const Animal *bruno = new Dog();
	const Animal *luna = new Cat();

	std::cout << "\ngeneric_animal is a " << generic_animal->getType() << " and it says ";
	generic_animal->makeSound();

	std::cout << "\nbruno is a " << bruno->getType() << " and it says ";
	bruno->makeSound();

	std::cout << "\nluna is a " << luna->getType() << " and it says ";
	luna->makeSound();

	std::cout << std::endl;

	delete(generic_animal);
	delete(bruno);
	delete(luna);

	// const WrongAnimal *wrong_animal = new WrongCat();
	// std::cout << "wrong_animal is a " << wrong_animal->getType() << " and it says ";
	// wrong_animal->makeSound();
	// delete(wrong_animal);

	return (0);
}