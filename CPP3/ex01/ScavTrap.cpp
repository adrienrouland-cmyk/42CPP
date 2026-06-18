/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 16:56:33 by arouland          #+#    #+#             */
/*   Updated: 2026/06/18 19:50:01 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

/*************** CANONICAL FORM  ***************/

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap " << this->_name << " is born with " << _hitPoints << " hitPoints, " 
        << _energyPoints << " energyPoints, and " << _attackDamage 
        << " attackDamage" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << this->_name << " was destroyed" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
    *this = src;
    return ;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs)
{
    std::cout << "Scavtrap assignement to " << rhs.getName() << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_attackDamage = rhs.getAttackDamage();
        this->_hitPoints = rhs.getHitPoints();
        this->_energyPoints = rhs.getEnergyPoints();
    }
    return *this;
}

/*************** MEMBER FUNCTIONS  ***************/

void    ScavTrap::guardGate(void) const
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_energyPoints > 0)
    {
        std::cout << "SUPER ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage" << std::endl;
        this->_energyPoints--;
    }
    else
        std::cout << "SUPER ScavTrap " << this->_name << " has not enough energy to attack !" << std::endl;
    return ;
}
