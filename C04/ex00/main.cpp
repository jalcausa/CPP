#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	std::cout << "POLIMORFISMO CORRECTO (con virtual)" << std::endl;
	const Animal *generic_animal = new Animal();
	const Animal *bruno = new Dog();
	const Animal *luna = new Cat();

	std::cout << "\ngeneric_animal is a " << generic_animal->getType() << " and it says ";
	generic_animal->makeSound();

	// Gracias a virtual, se llama a Dog::makeSound()
	std::cout << "\nbruno is a " << bruno->getType() << " and it says ";
	bruno->makeSound();

	// Gracias a virtual, se llama a Cat::makeSound()
	std::cout << "\nluna is a " << luna->getType() << " and it says ";
	luna->makeSound();

	std::cout << std::endl;

	delete(generic_animal);
	delete(bruno);
	delete(luna);

	std::cout << "POLIMORFISMO INCORRECTO (sin virtual)" << std::endl;
	
	// WrongCat creado como WrongCat* - funciona correctamente
	const WrongCat *real_wrong_cat = new WrongCat();
	std::cout << "real_wrong_cat is a " << real_wrong_cat->getType() << " and it says ";
	real_wrong_cat->makeSound();
	delete(real_wrong_cat);

	// WrongCat creado como WrongAnimal* - falla el polimorfismo
	const WrongAnimal *wrong_animal = new WrongCat();
	std::cout << "wrong_animal is a " << wrong_animal->getType() << " and it says ";
	// Sin virtual, se llama a WrongAnimal::makeSound() en vez de WrongCat::makeSound()
	wrong_animal->makeSound();
	
	// Aunque el tipo es 'WrongCat', se llama a WrongAnimal::makeSound()
	// Esto ocurre porque makeSound() NO es virtual en WrongAnimal
	// Sin destructor virtual, solo se llama ~WrongAnimal(), no ~WrongCat()
	delete(wrong_animal);

	return (0);
}