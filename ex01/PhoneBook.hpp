/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 19:44:12 by arouland          #+#    #+#             */
/*   Updated: 2026/06/08 16:23:42 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void add_contact(void);
		void search_contact(void);
		void	SetContactId(int id);
		void	print_list(void);
		std::string	GetFirstNameId(int id);
		std::string	GetLastNameId(int id);
		std::string	GetNickNameId(int id);
		std::string	GetPhoneNumberId(int id);
		std::string	GetDarkestSecretId(int id);
	private:
		Contact contacts[8];
		int current_contact;
		int nb_contact;
};

#endif