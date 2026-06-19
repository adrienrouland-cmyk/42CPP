/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 13:40:55 by arouland          #+#    #+#             */
/*   Updated: 2026/06/19 15:07:58 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
        DiamondTrap(std::string name);
        ~DiamondTrap(void);
        DiamondTrap(DiamondTrap const &src);
        DiamondTrap& operator=(DiamondTrap const &rhs);

        using ScavTrap::attack;
        void    whoAmI(void);
    private:
        std::string _name;
};

#endif