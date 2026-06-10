/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 20:15:51 by arouland          #+#    #+#             */
/*   Updated: 2026/06/10 09:09:02 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void            attack(void);
        void            setWeapon(Weapon &weapon);
    private:
        std::string     _name;
        Weapon          *_weapon;
};

#endif