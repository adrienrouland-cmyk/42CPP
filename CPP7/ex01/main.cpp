/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 19:35:44 by arouland          #+#    #+#             */
/*   Updated: 2026/07/02 22:37:04 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cstring>
#include <cctype>

void toUpper(char &c)
{
	c = std::toupper(c);
}

void	plusUn(int &i)
{
	i++;
}

void	printInt(int const &i)
{
	std::cout << i << " ";
}

int main(void)
{
	char str[] = "hello test 42";
	std::cout << str << std::endl;
	::iter(str, strlen(str), toUpper);
	std::cout << str << std::endl;

	int const tabconst[] = {1, 2, 3};
	int tab[] = {1, 2, 3};
	::iter(tabconst, sizeof(tabconst)/sizeof(int), printInt);
	std::cout << std::endl;
	::iter(tab, sizeof(tab)/sizeof(int), plusUn);
	::iter(tab, sizeof(tab)/sizeof(int), printInt);
}