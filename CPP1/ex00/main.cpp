/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:39:57 by arouland          #+#    #+#             */
/*   Updated: 2026/06/09 18:03:48 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	randomChump("Foo");
	Zombie *Bar = newZombie("Bar");
	Bar->announce();
	delete (Bar);
}