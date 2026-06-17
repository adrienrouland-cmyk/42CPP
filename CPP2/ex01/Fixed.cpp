/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:23:51 by arouland          #+#    #+#             */
/*   Updated: 2026/06/17 12:23:24 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_nbFractBits = 8;

Fixed::Fixed(void) : _nb(0)
{
	std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed&  Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_nb = rhs.getRawBits();
    return *this;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_nb;
}

void    Fixed::setRawBits(int const raw)
{
    this->_nb = raw;
    return ;
}