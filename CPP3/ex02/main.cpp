/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 15:37:22 by arouland          #+#    #+#             */
/*   Updated: 2026/06/18 18:40:02 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
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
    
    FragTrap frag("frag");
    frag.attack("méchant");
    frag.highFivesGuys();
    frag.takeDamage(1);
    std::cout << "fragTrap hitpoint = " << frag.getHitPoints() << std::endl;
    frag.beRepaired(1);
    std::cout << "fragTrap hitpoint = " << frag.getHitPoints() << std::endl;
    frag.takeDamage(11);
    std::cout << "fragTrap hitpoint = " << frag.getHitPoints() << std::endl; 

    std::cout << std::endl << std::endl;
    
    FragTrap frag2("frag2");
    frag2 = frag;
    frag2.attack("méchant2");
    frag2.takeDamage(1);
    std::cout << "fragTrap hitpoint = " << frag2.getHitPoints() << std::endl;
    frag2.beRepaired(1);
    std::cout << "fragTrap hitpoint = " << frag2.getHitPoints() << std::endl;
    frag2.takeDamage(11);
    std::cout << "fragTrap hitpoint = " << frag2.getHitPoints() << std::endl; 

    std::cout << std::endl << std::endl;
    
    FragTrap frag3(frag2);
    frag3.attack("méchant2");
    frag3.takeDamage(1);
    std::cout << "fragTrap hitpoint = " << frag3.getHitPoints() << std::endl;
    frag3.beRepaired(1);
    std::cout << "fragTrap hitpoint = " << frag3.getHitPoints() << std::endl;
    frag3.takeDamage(11);
    std::cout << "fragTrap hitpoint = " << frag3.getHitPoints() << std::endl; 

}