/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:23:51 by arouland          #+#    #+#             */
/*   Updated: 2026/06/23 13:52:23 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_nbFractBits = 8;

Fixed::Fixed(void) : _value(0)
{
    return ;
}

Fixed::Fixed(Fixed const &src)
{
    *this = src;
    return ;
}

Fixed::~Fixed(void)
{
}

Fixed&  Fixed::operator=(Fixed const &rhs)
{
    this->_value = rhs.getRawBits();
    return *this;
}

Fixed::Fixed(int const n)
{
    this->_value = n * (1 << Fixed::_nbFractBits);
}

Fixed::Fixed(float const z)
{
    this->_value = roundf(z * (1 << Fixed::_nbFractBits));
}

bool    Fixed::operator>(Fixed const &rhs) const
{
    if (this->_value > rhs.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator<(Fixed const &rhs) const
{
    if (this->_value < rhs.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator>=(Fixed const &rhs) const
{
    if (this->_value >= rhs.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator<=(Fixed const &rhs) const
{
    if (this->_value <= rhs.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator==(Fixed const &rhs) const
{
    if (this->_value == rhs.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator!=(Fixed const &rhs) const
{
    if (this->_value != rhs.getRawBits())
        return true;
    return false;
}

Fixed   Fixed::operator+(Fixed const &rhs) const
{
    Fixed temp;
    temp.setRawBits(this->_value + rhs.getRawBits());
    return (temp);
}

Fixed   Fixed::operator-(Fixed const &rhs) const
{
    Fixed temp;
    temp.setRawBits(this->_value - rhs.getRawBits());
    return (temp);
}

Fixed   Fixed::operator*(Fixed const &rhs) const
{
    Fixed temp;
    temp.setRawBits((roundf(((double)this->_value * (double)rhs.getRawBits())  / (1 << Fixed::_nbFractBits))));
    return (temp);
}

Fixed   Fixed::operator/(Fixed const &rhs) const
{
    if (rhs.getRawBits() == 0)
        return Fixed(0);
    Fixed temp;
    temp.setRawBits((roundf(((double)this->_value * (1 << Fixed::_nbFractBits) / (double)rhs.getRawBits()))));
    return (temp);
}

Fixed&   Fixed::operator++(void)
{
    this->_value += 1;
    return *this;
}

Fixed&   Fixed::operator--(void)
{
    this->_value -= 1;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed temp(*this);
    this->_value += 1;
    return (temp);
}

Fixed   Fixed::operator--(int)
{
    Fixed temp(*this);
    this->_value -= 1;
    return (temp);
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

Fixed&  Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1.getRawBits() <= f2.getRawBits())
        return (f1);
    return (f2);
}

Fixed  const &Fixed::min(Fixed const &f1, Fixed const &f2)
{
    if (f1.getRawBits() <= f2.getRawBits())
        return (f1);
    return (f2);
}

Fixed&  Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1.getRawBits() >= f2.getRawBits())
        return (f1);
    return (f2);
}

Fixed  const &Fixed::max(Fixed const &f1, Fixed const &f2)
{
    if (f1.getRawBits() >= f2.getRawBits())
        return (f1);
    return (f2);
}


std::ostream&   operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}