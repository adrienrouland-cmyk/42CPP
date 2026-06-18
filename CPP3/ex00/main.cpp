/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 15:37:22 by arouland          #+#    #+#             */
/*   Updated: 2026/06/18 16:40:22 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
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
}