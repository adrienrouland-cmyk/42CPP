/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 20:11:46 by arouland          #+#    #+#             */
/*   Updated: 2026/06/08 15:03:18 by arouland         ###   ########.fr       */
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
			std::string PhoneNumber, std::string DarkestSecret)
{
	this->FirstName = FirstName;
	this->LastName = LastName;
	this->PhoneNumber = PhoneNumber;
	this->DarkestSecret = DarkestSecret;
}

std::string	Contact::GetFirstName(void)
{
	return (this->FirstName);
}

std::string	Contact::GetLastName(void)
{
	return (this->LastName);
}

std::string	Contact::GetPhoneNumber(void)
{
	return (this->PhoneNumber);
}

std::string	Contact::GetDarkestSecret(void)
{
	return (this->DarkestSecret);
}	
