/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcausa <jalcausa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:40:42 by jalcausa          #+#    #+#             */
/*   Updated: 2025/07/21 12:40:53 by jalcausa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_number;
		std::string	_secret;

	public:
		Contact(void);
		Contact(std::string fn, std::string ln, std::string nn, std::string n, std::string ds);
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getNumber() const;
		std::string getDarkestSecret() const;
};

#endif
