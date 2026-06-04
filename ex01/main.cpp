/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 19:42:00 by arouland          #+#    #+#             */
/*   Updated: 2026/06/04 20:23:40 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

void	add(PhoneBook phonebook)
{
	int	contact_target;
	
	if (phonebook.nb_contact == 8)
		contact_target = 0;
		// A voir car si 8 contacts le nouveau doit remplacer le oldest one donc tout decaler
	phonebook.nb_contact += 1;
	std::cout << "Input the information of the new contact" << std::endl;
}

int	main(void)
{
	PhoneBook phonebook;

	std::string str;
	while (str != "EXIT")
	{
		std::cin >> str;
		if (str == "ADD")
			add(phonebook);	
	}
}