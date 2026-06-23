/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 19:39:07 by arouland          #+#    #+#             */
/*   Updated: 2026/06/19 19:51:41 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal()
{
    this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
    *this = src;
}

Dog& Dog::operator=(Dog const &rhs)
{
    this->_type = rhs._type;
    return *this;
}

void    Dog::makeSound(void) const
{
    std::cout << "[DOG] BARK BARK BARK" << std::endl;
}