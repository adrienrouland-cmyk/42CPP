/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 17:30:45 by arouland          #+#    #+#             */
/*   Updated: 2026/07/02 12:21:26 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

bool	is_int(std::string input)
{
	char *endptr;
	errno = 0;
	long int nb = strtol(input.c_str(), &endptr, 10);
	if (errno == ERANGE)
		return false;
	if (endptr == input.c_str())
		return false;
	if (*endptr != '\0')
		return false;
	if (nb < std::numeric_limits<int>::min() || nb > std::numeric_limits<int>::max())
		return false;
	return true;
}

bool	is_float(std::string input)
{
	char *endptr;
	errno = 0;
	double nb = strtod(input.c_str(), &endptr);
	if (errno == ERANGE)
		return false;
	if (endptr[0] == '\0' || endptr[0] != 'f' || endptr[1] != '\0')
		return false;
	if (input.find('.') == std::string::npos && input.find('e') == std::string::npos
		&& input.find('E') == std::string::npos)
		return false;
	if (nb < -std::numeric_limits<float>::max() || nb > std::numeric_limits<float>::max())
		return false;
	return true;
}

bool	is_double(std::string input)
{
	char *endptr;
	errno = 0;
	long double nb = strtod(input.c_str(), &endptr);
	if (errno == ERANGE)
		return false;
	if (endptr == input.c_str() || input.compare("-nan") == 0)
		return false;
	if (*endptr != '\0')
		return false;
	if (nb < -std::numeric_limits<double>::max() || nb > std::numeric_limits<double>::max())
		return false;
	return true;
}