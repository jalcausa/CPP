/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcausa <jalcausa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 13:05:49 by jalcausa          #+#    #+#             */
/*   Updated: 2025/09/06 13:13:31 by jalcausa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	leak_check(void)
{
	std::system("leaks -q zombie_horde");
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