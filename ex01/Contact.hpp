/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 19:43:12 by arouland          #+#    #+#             */
/*   Updated: 2026/06/08 14:47:31 by arouland         ###   ########.fr       */
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
			std::string PhoneNumber, std::string DarkestSecret);
		std::string	GetFirstName(void);
		std::string	GetLastName(void);
		std::string	GetPhoneNumber(void);
		std::string	GetDarkestSecret(void);				
	private:
		std::string FirstName;
		std::string LastName;
		std::string PhoneNumber;
		std::string DarkestSecret;
};

#endif