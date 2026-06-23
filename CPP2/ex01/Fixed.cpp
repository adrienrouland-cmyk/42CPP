/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:23:51 by arouland          #+#    #+#             */
/*   Updated: 2026/06/17 13:24:48 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_nbFractBits = 8;

Fixed::Fixed(void) : _value(0)
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
    this->_value = rhs.getRawBits();
    return *this;
}

Fixed::Fixed(int const n)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = n * (1 << Fixed::_nbFractBits);
}

Fixed::Fixed(float const z)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(z * (1 << Fixed::_nbFractBits));
}

int     Fixed::getRawBits(void) const
{
    return this->_value;
}

void    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
    return ;
}

float   Fixed::toFloat(void) const
{
    return ((float)this->_value / (1 << Fixed::_nbFractBits));
}

int     Fixed::toInt(void) const
{
    return (this->_value / (1 << Fixed::_nbFractBits));
}

std::ostream&   operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}