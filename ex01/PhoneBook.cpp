/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 19:46:55 by arouland          #+#    #+#             */
/*   Updated: 2026/06/08 15:21:15 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	this->nb_contact = 0;
}

PhoneBook::~PhoneBook(void)
{
	
}

void	PhoneBook::add_contact(void)
{
	//va regarder le nb de contacts qu'il y a actuellement
	// si moins de 8 -> va ajouter au [nb_contacts]
	// si 8 -> remplace le oldest (0), et va switch les autres ?
	std::cout << "Add for number " << this->nb_contact % 8 << std::endl;
	SetContactId(nb_contact % 8);
	if (nb_contact < 8)
		this->nb_contact++;
}

void	PhoneBook::search_contact(void)
{
	// pour l'instant on va print les contacts
	int i;

	i = 0;
	while (i < this->nb_contact)
	{
		std::cout << "Numero " << i << std::endl;
		std::cout << "First name = " << this->GetFirstNameId(i) << std::endl;
		std::cout << "Last name = " << this->GetLastNameId(i) << std::endl;
		std::cout << "Phone number = " << this->GetPhoneNumberId(i) << std::endl;
		std::cout << "Darkest secret = " << this->GetDarkestSecretId(i) << std::endl;
		std::cout << std::endl;
		i++;
	}
}

void	PhoneBook::SetContactId(int id)
{
	std::string FirstName;
	std::string LastName;
	std::string PhoneNumber;
	std::string DarkestSecret;
	
	std::cout << "Input the first name :" << std::endl;
	std::cin >> FirstName;
	std::cout << "Input the last name :" << std::endl;
	std::cin >> LastName;
	std::cout << "Input the phone number :" << std::endl;
	std::cin >> PhoneNumber;
	std::cout << "Input the darkest secret :" << std::endl;
	std::cin >> DarkestSecret;
	this->contacts[id].SetContact(FirstName, LastName, 
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

std::string	PhoneBook::GetPhoneNumberId(int id)
{
	return (this->contacts[id].GetPhoneNumber());	
}

std::string	PhoneBook::GetDarkestSecretId(int id)
{
	return (this->contacts[id].GetDarkestSecret());
}