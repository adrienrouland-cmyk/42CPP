/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 20:11:46 by arouland          #+#    #+#             */
/*   Updated: 2026/06/08 17:45:30 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	
}

Contact::~Contact(void)
{
	
}

void	Contact::SetContact(std::string FirstName, std::string LastName, 
			std::string NickName, std::string PhoneNumber, std::string DarkestSecret)
{
	this->_FirstName = FirstName;
	this->_LastName = LastName;
	this->_NickName = NickName;
	this->_PhoneNumber = PhoneNumber;
	this->_DarkestSecret = DarkestSecret;
}

std::string	Contact::GetFirstName(void) const
{
	return (this->_FirstName);
}

std::string	Contact::GetLastName(void) const
{
	return (this->_LastName);
}

std::string	Contact::GetNickName(void) const
{
	return (this->_NickName);
}

std::string	Contact::GetPhoneNumber(void) const
{
	return (this->_PhoneNumber);
}

std::string	Contact::GetDarkestSecret(void) const
{
	return (this->_DarkestSecret);
}	
