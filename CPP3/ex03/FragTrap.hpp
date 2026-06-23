/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 18:00:51 by arouland          #+#    #+#             */
/*   Updated: 2026/06/19 15:23:49 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(std::string name);
        ~FragTrap(void);
        FragTrap(FragTrap const &src);
        FragTrap& operator=(FragTrap const &rhs);

        void    highFivesGuys(void) const;
};

#endif