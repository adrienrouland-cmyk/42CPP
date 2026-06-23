/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 16:45:14 by arouland          #+#    #+#             */
/*   Updated: 2026/06/18 17:13:36 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ~ScavTrap(void);
        ScavTrap(ScavTrap const &src);
        ScavTrap &operator=(ScavTrap const &rhs);

        void    guardGate(void) const;
        void    attack(const std::string& target);
};

#endif