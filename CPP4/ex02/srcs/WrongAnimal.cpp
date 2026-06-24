/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 21:51:56 by arouland          #+#    #+#             */
/*   Updated: 2026/06/23 19:02:18 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal&     WrongAnimal::operator=(WrongAnimal const &rhs)
{
    this->_type = rhs._type;
    return *this;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "[WRONGANIMAL] *WrongAnimal sounds*" << std::endl;
}