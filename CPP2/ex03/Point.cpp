/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 17:54:54 by arouland          #+#    #+#             */
/*   Updated: 2026/06/23 13:48:30 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point(void) : _x(0), _y(0)
{
    
}

Point::Point(Point const &src) : _x(src._x), _y(src._y)
{    
}

Point::~Point(void)
{}

Point&  Point::operator=(Point const &rhs)
{
    (void)rhs;
    return *this;
}
// ne peut pas assigner de nouveaux car _x et _y sont const

Point::Point(float const z1, float const z2) : _x(z1), _y(z2)
{}

Fixed   Point::getX(void) const
{
    return this->_x;
}

Fixed   Point::getY(void) const
{
    return this->_y;
}
