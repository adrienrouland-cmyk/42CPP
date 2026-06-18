/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 17:54:54 by arouland          #+#    #+#             */
/*   Updated: 2026/06/18 09:45:02 by arouland         ###   ########.fr       */
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

Fixed   Point::getAire(Point const a, Point const b, Point const c)
{
    Fixed aireDoubled;

    aireDoubled = (
        a.getX()*(b.getY() - c.getY()) 
        + b.getX()*(c.getY() - a.getY())
        + c.getX()*(a.getY() - b.getY()));
    if (aireDoubled < 0)
        aireDoubled = aireDoubled * -1;
    return (aireDoubled);
}
// Utilisation de aireDoubled pour ne pas perdre de la précision en divisant par 2

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed aireABC = Point::getAire(a, b, c);
    Fixed aireABP = Point::getAire(a, b, point);
    Fixed aireACP = Point::getAire(a, c, point);
    Fixed aireBCP = Point::getAire(b, c, point);
    if (aireABP == 0 || aireACP == 0 || aireBCP == 0)
        return (false);
    else if (aireABC == (aireABP + aireACP + aireBCP))
            return (true);
    else
        return (false);
}