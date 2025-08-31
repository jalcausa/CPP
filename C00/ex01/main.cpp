/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcausa <jalcausa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 13:23:41 by jalcausa          #+#    #+#             */
/*   Updated: 2025/08/31 13:24:16 by jalcausa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string input = "";
	PhoneBook phonebook;

	while (true)
	{
		std::cout << "=============== WELCOME ===============" << std::endl
				  << "Please enter a command: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			break ;
	}
	std::cout << "Goodbye" << std::endl;
	return (0);
}