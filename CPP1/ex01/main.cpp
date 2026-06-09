/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:39:57 by arouland          #+#    #+#             */
/*   Updated: 2026/06/09 18:24:39 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *Horde = zombieHorde(5, "Bar");
	int i = 0;
	while (i < 5)
	{
		Horde[i].announce();
		i++;
	}
	delete [] (Horde);
}