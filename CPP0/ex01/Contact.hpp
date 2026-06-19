/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 19:43:12 by arouland          #+#    #+#             */
/*   Updated: 2026/06/19 19:10:46 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void	SetContact(std::string FirstName, std::string LastName, 
			std::string NickName, std::string PhoneNumber, std::string DarkestSecret);
		std::string	GetFirstName(void) const;
		std::string	GetLastName(void) const;
		std::string	GetNickName(void) const;
		std::string	GetPhoneNumber(void) const;
		std::string	GetDarkestSecret(void) const;				
	private:
		std::string _FirstName;
		std::string _LastName;
		std::string _NickName;
		std::string _PhoneNumber;
		std::string _DarkestSecret;
};

#endif