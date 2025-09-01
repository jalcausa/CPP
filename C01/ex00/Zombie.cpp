/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcausa <jalcausa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:38:21 by jalcausa          #+#    #+#             */
/*   Updated: 2025/09/01 19:59:10 by jalcausa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

/*
Se puede usar también una lista de inicialización así:
Zombie::Zombie(std::string name) : _name(name) {}
*/

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " has been destroyed" << std::endl;
}

void Zombie::announce() const
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}