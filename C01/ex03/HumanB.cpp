/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcausa <jalcausa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 20:17:48 by jalcausa          #+#    #+#             */
/*   Updated: 2025/09/07 11:29:52 by jalcausa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {};

HumanB::~HumanB(void){};

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack()
{
	if (this->_weapon == NULL)
		std::cout << "No weapon" << std::endl;
	else
	{
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	}
}