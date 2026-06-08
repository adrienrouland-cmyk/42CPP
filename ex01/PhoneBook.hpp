/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 19:44:12 by arouland          #+#    #+#             */
/*   Updated: 2026/06/08 18:56:02 by arouland         ###   ########.fr       */
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
		void 		AddContact(void);
		void 		SearchContact(void);
		void		SetContactId(int id);
		void		PrintList(void) const;
		void		DisplayContact(int id) const;
		std::string	GetFirstNameId(int id) const;
		std::string	GetLastNameId(int id) const;
		std::string	GetNickNameId(int id) const;
		std::string	GetPhoneNumberId(int id) const;
		std::string	GetDarkestSecretId(int id) const;
	private:
		Contact 	_contacts[8];
		int 		_currentContact;
		int 		_nbContact;
};

#endif