/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 18:20:39 by arouland          #+#    #+#             */
/*   Updated: 2026/06/04 19:38:12 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	
	i = 1;
	if (argc != 1)
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout << (char)std::toupper(argv[i][j]);
				j++;
			}
			std::cout << std::endl;
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" 
			<< std::endl;
}