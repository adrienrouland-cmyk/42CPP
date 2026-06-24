/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 19:56:12 by arouland          #+#    #+#             */
/*   Updated: 2026/06/23 19:14:57 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal()
{
    this->_type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator=(WrongCat const &rhs)
{
    this->_type = rhs._type;
    return *this;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "[WrongCat] MIAOU MIAOU MIAOU" << std::endl;
}