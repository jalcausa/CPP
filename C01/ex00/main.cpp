#include "Zombie.hpp"

int main()
{
	std::string name1;
	std::string name2;
	Zombie* heapZombie;

	std::cout << "Enter a name for the Stack zombie:" << std::endl;
	std::getline(std::cin, name1);

	std::cout << "Enter a name for the Heap zombie:" << std::endl;
	std::getline(std::cin, name2);
	
	randomChump(name1);
	
	heapZombie = newZombie(name2);
	heapZombie->announce();

	delete heapZombie;
	
	return(0);
}