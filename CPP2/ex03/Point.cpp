/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 17:54:54 by arouland          #+#    #+#             */
/*   Updated: 2026/06/17 21:18:02 by arouland         ###   ########.fr       */
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

float   Point::getX(void) const
{
    return this->_x.toFloat();
}

float   Point::getY(void) const
{
    return this->_y.toFloat();
}

float   Point::getAire(Point const a, Point const b, Point const c)
{
    float aire;

    aire = std::abs(
        a.getX()*(b.getY() - c.getY()) 
        + b.getX()*(c.getY() - a.getY())
        + c.getX()*(a.getY() - b.getY()))
        / 2;
    return (aire);
}

bool    Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
    float aireABC = Point::getAire(a, b, c);
    float aireABP = Point::getAire(a, b, point);
    float aireACP = Point::getAire(a, c, point);
    float aireBCP = Point::getAire(b, c, point);
    if (aireABP == 0 || aireACP == 0 || aireBCP == 0)
        return (false);
    else if (aireABC == (aireABP + aireACP + aireBCP))
            return (true);
    else
        return (false);
}