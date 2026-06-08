/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 19:46:55 by arouland          #+#    #+#             */
/*   Updated: 2026/06/08 17:30:39 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "phone.hpp"

PhoneBook::PhoneBook(void)
{
	this->nb_contact = 0;
	this->current_contact = 0;
}

PhoneBook::~PhoneBook(void)
{
	
}

void	PhoneBook::add_contact(void)
{
	SetContactId(current_contact % 8);
	this->current_contact++;
	if (nb_contact < 8)
		this->nb_contact++;
}

void	PhoneBook::print_list(void)
{
	int id;
	
	id = 0;
	if (this->nb_contact != 0)
	{		
		std::cout << "|" << std::setw(10) << "Index" << "|";
		std::cout << std::setw(10) << "First name" << "|";
		std::cout << std::setw(10) << "Last name" << "|";
		std::cout << std::setw(10) << "Nick name" << "|" << std::endl;
	}
	while (id < this->nb_contact)
	{
		std::cout << "|" << std::setw(10) << id << "|";
		std::cout << std::setw(10) << trunc_ten(this->GetFirstNameId(id)) << "|";
		std::cout << std::setw(10) << trunc_ten(this->GetLastNameId(id)) << "|";
		std::cout << std::setw(10) << trunc_ten(this->GetNickNameId(id)) << "|" << std::endl;
		id++;
	}
}

void	PhoneBook::search_contact(void)
{
	int id;
	std::string index;

	print_list();
	if (this->nb_contact != 0)
	{
		if (this->nb_contact != 1)
			std::cout << "Enter the index you want between 0 and " << 
			this->nb_contact -1 << " :" << std::endl;
		else
			std::cout << "Enter 0 to search the first contact" << std::endl;
		index = get_line("");
		if (is_valid_index(index))
		{
			id = index[0] - '0';
			if (id < this->nb_contact)
			{
				std::cout << "First name = " << this->GetFirstNameId(id) << std::endl;
				std::cout << "Last name = " << this->GetLastNameId(id) << std::endl;
				std::cout << "Nick name = " << this->GetNickNameId(id) << std::endl;
				std::cout << "Phone number = " << this->GetPhoneNumberId(id) << std::endl;
				std::cout << "Darkest secret = " << this->GetDarkestSecretId(id) << std::endl;				
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
	
	FirstName = get_line("- Input the first name :");
	LastName = get_line("- Input the last name :");
	NickName = get_line("- Input the nick name :");
	PhoneNumber = get_line("- Input the phone number :");
	DarkestSecret = get_line("- Input the darkest secret :");
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
	return (this->contacts[id].GetNickName());
}

std::string	PhoneBook::GetPhoneNumberId(int id)
{
	return (this->contacts[id].GetPhoneNumber());	
}

std::string	PhoneBook::GetDarkestSecretId(int id)
{
	return (this->contacts[id].GetDarkestSecret());
}