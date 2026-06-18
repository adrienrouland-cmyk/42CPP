/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 10:49:41 by arouland          #+#    #+#             */
/*   Updated: 2026/06/18 19:49:43 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : 
    _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << this->_name << " is born with " << _hitPoints << " hitPoints, " 
        << _energyPoints << " energyPoints, and " << _attackDamage 
            << " attackDamage" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->_name << " was destroyed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    *this = src;
    return ;
}
//on utilise l'opérateur = qu'on a défini plus bas

ClapTrap&   ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << "Claptrap assignement to " << rhs.getName() << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_attackDamage = rhs.getAttackDamage();
        this->_hitPoints = rhs.getHitPoints();
        this->_energyPoints = rhs.getEnergyPoints();
    }
    return *this;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage" << std::endl;
        this->_energyPoints--;
    }
    else
        std::cout << "ClapTrap " << this->_name << " has not enough energy to attack !" << std::endl;;
    return ;
}
// Doit faire perdre. la target attackdamage, mais pas faisable dans cette classe car on a que le std::string& target

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints >= amount)
    {
        std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage" << std::endl;
        this->_hitPoints -= amount;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage" << std::endl;
        std::cout << "ClapTrap " << this->_name << " is dead !" << std::endl;
        this->_hitPoints = 0;
    }
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0)
    {
        this->_energyPoints--;
        std::cout << "ClapTrap " << this->_name << " repairs itself of " << amount << " points" << std::endl;
        this->_hitPoints += amount;
    }
    else
        std::cout << "ClapTrap " << this->_name << " has not enough energy to repair !" << std::endl;    
    return ;
}

/***************** GETTERS & SETTERS  *****************/

unsigned int     ClapTrap::getHitPoints(void) const
{
    return this->_hitPoints;
}

unsigned int     ClapTrap::getEnergyPoints(void) const
{
    return this->_energyPoints;
}

std::string    ClapTrap::getName(void) const
{
    return this->_name;
}

unsigned int     ClapTrap::getAttackDamage(void) const
{
    return this->_attackDamage;
}

void        ClapTrap::setHitPoints(unsigned int points)
{
    this->_hitPoints = points;
}

void        ClapTrap::setEnergyPoints(unsigned int points)
{
    this->_energyPoints = points;
}

void        ClapTrap::setAttackDamage(unsigned int damage)
{
    this->_attackDamage = damage;
}