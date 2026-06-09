/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:32:28 by arouland          #+#    #+#             */
/*   Updated: 2026/06/09 18:13:31 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie		*zombieHorde(int N, std::string name)
{
	int i = 0;
	
	Zombie* zombie_horde = new Zombie[N];
	while (i < N)
	{
		zombie_horde[i].setName(name);
		i++;
	}
	return (zombie_horde);
}