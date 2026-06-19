/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 15:37:22 by arouland          #+#    #+#             */
/*   Updated: 2026/06/19 16:29:39 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
    DiamondTrap diamond("diamond");
    diamond.attack("méchant");
    diamond.whoAmI();
    diamond.guardGate();
    diamond.highFivesGuys();
    diamond.takeDamage(50);
    std::cout << "DiamondTrap hitpoint = " << diamond.getHitPoints() << std::endl;
    diamond.beRepaired(10);
    std::cout << "DiamondTrap hitpoint = " << diamond.getHitPoints() << std::endl;
    diamond.takeDamage(500);
    diamond.attack("méchant");

    std::cout << std::endl << std::endl;

    DiamondTrap diamond2("diamond2");
    DiamondTrap diamond3("diamond3");
    diamond3 = diamond2;
    diamond3.attack("méchant du 3");

    std::cout << std::endl << std::endl;

}