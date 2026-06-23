/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 10:49:42 by arouland          #+#    #+#             */
/*   Updated: 2026/06/23 17:09:09 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>

class ClapTrap
{
    public:
        ClapTrap(std::string name);
		ClapTrap(void);
        ~ClapTrap(void);
        ClapTrap(ClapTrap const &src);
        ClapTrap &operator=(ClapTrap const &rhs);

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        
        unsigned int     getHitPoints(void) const;
        unsigned int     getEnergyPoints(void) const;
        std::string     getName(void) const;
        unsigned int    getAttackDamage(void) const;
        void            setHitPoints(unsigned int points);
        void            setEnergyPoints(unsigned int points);
        void            setAttackDamage(unsigned int damage);
        
    protected:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
};

#endif