/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 18:45:22 by arouland          #+#    #+#             */
/*   Updated: 2026/06/10 09:14:10 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string			&getType(void) const;
		void				setType(std::string value);
	private:
		std::string 		_type;
};

#endif