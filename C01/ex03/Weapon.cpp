/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcausa <jalcausa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 19:48:20 by jalcausa          #+#    #+#             */
/*   Updated: 2025/09/06 20:15:22 by jalcausa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){};

Weapon::~Weapon(void){}

const std::string &Weapon::getType(void)
{
	return this->_type;
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}