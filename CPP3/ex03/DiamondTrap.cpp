/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 13:52:26 by arouland          #+#    #+#             */
/*   Updated: 2026/06/19 16:27:23 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

/*************** CANONICAL FORM ***************/

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") , FragTrap(name), ScavTrap(name), _name(name)
{
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(30);
    std::cout << "DiamondTrap " << this->_name << " is born with " << _hitPoints << " hitPoints, " 
        << _energyPoints << " energyPoints, and " << _attackDamage 
        << " attackDamage" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap " << this->_name << " was destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), FragTrap(src), ScavTrap(src)
{
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_attackDamage = src._attackDamage;
    this->_energyPoints = src._energyPoints;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &rhs)
{
    std::cout << "DiamondTrap assignment to " << rhs.getName() << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->ClapTrap::_name = rhs.ClapTrap::_name;
        this->_attackDamage = rhs._attackDamage;
        this->_energyPoints = rhs._energyPoints;
        this->_hitPoints = rhs._hitPoints;
    }
    return *this;
}

/*************** MEMBER FUNCTIONS ***************/

void    DiamondTrap::whoAmI(void)
{
    std::cout << "My name is " << this->_name << " but my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}