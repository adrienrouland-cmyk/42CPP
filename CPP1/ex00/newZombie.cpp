/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:32:28 by arouland          #+#    #+#             */
/*   Updated: 2026/06/09 17:57:51 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie		*newZombie(std::string name)
{
	Zombie* new_zombie = new Zombie(name);
	return (new_zombie);
}