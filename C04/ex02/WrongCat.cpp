#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->_type = copy.getType();
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &copy)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_type = copy.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miua Miau!" << std::endl;
}
