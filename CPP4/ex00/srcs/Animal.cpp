/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:12:22 by arouland          #+#    #+#             */
/*   Updated: 2026/06/19 19:53:23 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include <iostream>

Animal::Animal(void) : _type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal&     Animal::operator=(Animal const &rhs)
{
    this->_type = rhs._type;
    return *this;
}

void    Animal::makeSound(void) const
{
    std::cout << "[ANIMAL] *Animal sounds*" << std::endl;
}