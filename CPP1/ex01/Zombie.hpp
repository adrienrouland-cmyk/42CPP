/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:26:49 by arouland          #+#    #+#             */
/*   Updated: 2026/06/09 18:28:03 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void			setName(std::string name);
		void			announce(void) const;
	private:
		std::string 	_name;
};

Zombie			*zombieHorde(int N, std::string name);

#endif