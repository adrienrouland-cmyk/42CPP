/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 14:10:16 by arouland          #+#    #+#             */
/*   Updated: 2026/06/30 14:34:33 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstdlib>
#include <iostream>
#include <limits>

int main(void)
{
	std::string str = "42.42f";
	char *endptr;
	double a = strtod(str.c_str(), &endptr);
	std::cout << " a = " << a << "\n endptr = " << endptr << std::endl;
	int b = atoi(str.c_str());
	std::cout << "b = " << b << std::endl;
	std::cout << std::numeric_limits<int>::min() << std::endl;
	std::cout << std::numeric_limits<int>::max() << std::endl;
	std::cout << std::numeric_limits<double>::min() << std::endl;
	std::cout << std::numeric_limits<double>::max() << std::endl;
	std::cout << std::numeric_limits<float>::min() << std::endl;
	std::cout << std::numeric_limits<float>::max() << std::endl;
}