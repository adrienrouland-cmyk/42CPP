/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 19:46:55 by arouland          #+#    #+#             */
/*   Updated: 2026/06/08 16:03:44 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "phone.hpp"

PhoneBook::PhoneBook(void)
{
	this->nb_contact = 0;
}

PhoneBook::~PhoneBook(void)
{
	
}

void	PhoneBook::add_contact(void)
{
	SetContactId(nb_contact % 8);
	if (nb_contact < 8)
		this->nb_contact++;
}

void	PhoneBook::search_contact(void)
{
	int id;
	std::string index;

	if (this->nb_contact != 0)
	{
		if (this->nb_contact != 1)
			std::cout << "Enter the index you want between 0 and " << 
			this->nb_contact -1 << " :" << std::endl;
		else
			std::cout << "Enter 0 to search the first contact" << std::endl;
		std::cin >> index; // a proteger si aleur non numerique
		if (is_valid_index(index))
		{
			id = index[0] - '0';
			if (id < this->nb_contact)
			{
				std::cout << std::setw(10) << trunc_ten(this->GetFirstNameId(id)) << " | ";
				std::cout << std::setw(10) << trunc_ten(this->GetLastNameId(id)) << " | ";
				std::cout << std::setw(10) << trunc_ten(this->GetPhoneNumberId(id)) << " | ";
				std::cout << std::setw(10) << trunc_ten(this->GetNickNameId(id)) << std::endl;	
			}
			else
				std::cout << "Incorrect id value" << std::endl;
		}
		else
			std::cout << "ID value must be a number between 0 and 7" << std::endl;
	}
	else
		std::cout << "There is no contact to search" << std::endl;
}

void	PhoneBook::SetContactId(int id)
{
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;
	
	std::cout << "Input the first name :" << std::endl;
	std::cin >> FirstName;
	std::cout << "Input the last name :" << std::endl;
	std::cin >> LastName;
	std::cout << "Input the nick name :" << std::endl;
	std::cin >> NickName;
	std::cout << "Input the phone number :" << std::endl;
	std::cin >> PhoneNumber;
	std::cout << "Input the darkest secret :" << std::endl;
	std::cin >> DarkestSecret;
	this->contacts[id].SetContact(FirstName, LastName, NickName,
		PhoneNumber, DarkestSecret);
	std::cout << "New contact added !" << std::endl;
}

std::string	PhoneBook::GetFirstNameId(int id)
{
	return (this->contacts[id].GetFirstName());
}

std::string	PhoneBook::GetLastNameId(int id)
{
	return (this->contacts[id].GetLastName());
}

std::string	PhoneBook::GetNickNameId(int id)
{
	return (this->contacts[id].GetLastName());
}

std::string	PhoneBook::GetPhoneNumberId(int id)
{
	return (this->contacts[id].GetPhoneNumber());	
}

std::string	PhoneBook::GetDarkestSecretId(int id)
{
	return (this->contacts[id].GetDarkestSecret());
}