/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:12:22 by arouland          #+#    #+#             */
/*   Updated: 2026/06/24 13:38:33 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include <iostream>

AAnimal::AAnimal(void) : _type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

AAnimal::~AAnimal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

AAnimal&     AAnimal::operator=(AAnimal const &rhs)
{
    this->_type = rhs._type;
    return *this;
}

std::string	AAnimal::getType(void) const
{
	return this->_type;
}
