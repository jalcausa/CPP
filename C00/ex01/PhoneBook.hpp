/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcausa <jalcausa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 12:52:24 by jalcausa          #+#    #+#             */
/*   Updated: 2025/08/31 12:52:33 by jalcausa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <stdlib.h>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int _contactCount;
		int _oldestIndex;
		std::string truncateStr(const std::string& str);
		void displayContactList();
		void displayContact(int index);
	
	public:
		PhoneBook(void);
		void add(void);
		void search(void);
};

#endif