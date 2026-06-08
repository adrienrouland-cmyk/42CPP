/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 19:42:00 by arouland          #+#    #+#             */
/*   Updated: 2026/06/08 17:22:23 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "phone.hpp"

int	main(void)
{
	PhoneBook phonebook;

	std::string str;
	std::cout << "*************************************" << std::endl;
	std::cout << "* Welcome to your great phonebook ! *" << std::endl;
	std::cout << "*************************************\n" << std::endl;
	while (str != "EXIT")
	{
		str = get_line("- Please enter your next command : ");
		if (str == "ADD")
			phonebook.add_contact();
		else if (str == "SEARCH")
			phonebook.search_contact();
		else if (str != "EXIT")
			std::cout << "Incorrect command" << std::endl;
	}
}