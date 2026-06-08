/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 19:42:00 by arouland          #+#    #+#             */
/*   Updated: 2026/06/08 13:24:02 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	PhoneBook phonebook;

	std::string str;
	std::cout << "Welcome to your great phonebook !" << std::endl;
	while (str != "EXIT")
	{
		std::cout << "Please enter your next command : ";
		std::cin >> str;
		if (str == "ADD")
			phonebook.add_contact();
		else if (str == "SEARCH")
			phonebook.search_contact();
	}
}