/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcausa <jalcausa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:50:33 by jalcausa          #+#    #+#             */
/*   Updated: 2025/07/21 12:50:40 by jalcausa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string n, std::string ds) : _firstName(fn), _lastName(ln), _nickname(nn), _number(n), _secret(ds) {}

std::string Contact::getFirstName() const 
{
	return _firstName;
}

std::string Contact::getLastName() const 
{
	return _lastName;
}

std::string Contact::getNickname() const 
{
	return _nickname;
}

std::string Contact::getNumber() const 
{
	return _number;
}

std::string Contact::getDarkestSecret() const 
{
	return _secret;
}