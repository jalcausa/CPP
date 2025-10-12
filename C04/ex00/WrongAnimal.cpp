#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() 
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->_type = "Generic WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->_type = copy.getType();
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_type = copy.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal() 
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (this->_type);
}

void WrongAnimal::setType(std::string const type) {
	this->_type = type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Generic WrongAnimal sound" << std::endl;
}