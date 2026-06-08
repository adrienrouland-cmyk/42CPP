/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:30:06 by arouland          #+#    #+#             */
/*   Updated: 2026/06/08 17:21:45 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

std::string trunc_ten(std::string to_trunc)
{
	if (to_trunc.length() < 10)
		return (to_trunc);
	else
		return (to_trunc.substr(0, 9) + ".");
}

std::string get_line(std::string prompt)
{
	std::string input;

	while (true)
	{
		if (!prompt.empty())
			std::cout << prompt << std::endl;
		if (!std::getline(std::cin, input))
		{
			std::cout << "EOF detected : End of the phonebook" << std::endl;
			std::exit(0);
		}
		if (!input.empty())
			break;
		std::cout << "The input cannot be empty !" << std::endl;
	}
	return (input);
}

bool is_valid_index(std::string index)
{
	if (index.length() != 1)
		return (false);
	if (index[0] < '0' || index[0] > '7')
		return (false);
	return (true);	
}