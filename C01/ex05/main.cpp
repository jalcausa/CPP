/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcausa <jalcausa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 12:45:36 by jalcausa          #+#    #+#             */
/*   Updated: 2025/09/07 12:47:01 by jalcausa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl	harl;
	
	std::cout<< "DEBUG" << std::endl;
	harl.complain("DEBUG");
	std::cout<< "INFO" << std::endl;
	harl.complain("INFO");
	std::cout<< "WARNING" << std::endl;
	harl.complain("WARNING");
	std::cout<< "ERROR" << std::endl;
	harl.complain("ERROR");
	return (0);
}