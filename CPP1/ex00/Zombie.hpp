/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:26:49 by arouland          #+#    #+#             */
/*   Updated: 2026/06/09 18:02:19 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void			announce(void) const;
	private:
		std::string 	_name;
};

Zombie* 		newZombie(std::string name);
void			randomChump(std::string name);

#endif