/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 15:37:22 by arouland          #+#    #+#             */
/*   Updated: 2026/06/18 17:48:14 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    ClapTrap trap("trap");
    trap.attack("méchant");
    trap.takeDamage(1);
    std::cout << "ClapTrap hitpoint = " << trap.getHitPoints() << std::endl;
    trap.beRepaired(1);
    std::cout << "ClapTrap hitpoint = " << trap.getHitPoints() << std::endl;
    trap.takeDamage(11);
    std::cout << "ClapTrap hitpoint = " << trap.getHitPoints() << std::endl; 
    
    std::cout << std::endl << std::endl;

    ClapTrap trap2("trap2");
    trap2 = trap;
    trap2.attack("méchant");
    trap2.takeDamage(1);
    std::cout << "ClapTrap hitpoint = " << trap2.getHitPoints() << std::endl;
    trap2.beRepaired(1);
    std::cout << "ClapTrap hitpoint = " << trap2.getHitPoints() << std::endl;
    trap2.takeDamage(11);
    std::cout << "ClapTrap hitpoint = " << trap2.getHitPoints() << std::endl; 
    
    std::cout << std::endl << std::endl;


    ScavTrap scav("scav");
    scav.attack("méchant2");
    scav.guardGate();
    scav.takeDamage(1);
    std::cout << "ScavTrap hitpoint = " << scav.getHitPoints() << std::endl;
    scav.beRepaired(1);
    std::cout << "ScavTrap hitpoint = " << scav.getHitPoints() << std::endl;
    scav.takeDamage(11);
    std::cout << "ScavTrap hitpoint = " << scav.getHitPoints() << std::endl; 

    std::cout << std::endl << std::endl;
    
    ScavTrap scav2("scav2");
    scav2 = scav;
    scav2.attack("méchant2");
    scav2.takeDamage(1);
    std::cout << "ScavTrap hitpoint = " << scav2.getHitPoints() << std::endl;
    scav2.beRepaired(1);
    std::cout << "ScavTrap hitpoint = " << scav2.getHitPoints() << std::endl;
    scav2.takeDamage(11);
    std::cout << "ScavTrap hitpoint = " << scav2.getHitPoints() << std::endl; 

}