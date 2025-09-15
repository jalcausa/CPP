#include "Zombie.hpp"

void	leak_check(void)
{
	std::system("leaks -q zombie_horde"); // macOS
	//std::system("valgrind ./programa"); //Linux
}

int	main()
{
	std::atexit(leak_check);
	std::cout << "Creating a horde of zombies ... " << std::endl;
	Zombie *horde = zombieHorde(10, "zombie");
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "The zombie number " << i << " is going to announce itself ... " << std::endl;
		horde[i].announce();
	}
	delete [] horde;
	return (0);

}