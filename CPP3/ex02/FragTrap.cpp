/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 18:00:50 by arouland          #+#    #+#             */
/*   Updated: 2026/06/18 19:41:12 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap " << this->_name << " is born with " << _hitPoints << " hitPoints, " 
        << _energyPoints << " energyPoints, and " << _attackDamage 
        << " attackDamage" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->_name << " was destroyed" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
    *this = src;
}
// Ici on se base sur le fait que j'ai crée un Constructeur ClapTrap vide

FragTrap& FragTrap::operator=(FragTrap const &rhs)
{
    std::cout << "Fragtrap assignement to " << rhs.getName() << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_attackDamage = rhs.getAttackDamage();
        this->_energyPoints = rhs.getEnergyPoints();
        this->_hitPoints = rhs.getHitPoints();
    }
    return *this;
}

/*************** MEMBER FUNCTIONS  ***************/

void    FragTrap::highFivesGuys(void) const
{
    std::cout << "Hey ! High Fives Guys Please !" << std::endl;
}


