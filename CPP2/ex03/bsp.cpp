/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 13:47:02 by arouland          #+#    #+#             */
/*   Updated: 2026/06/23 13:49:14 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed   getAire(Point const a, Point const b, Point const c)
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
    Fixed aireABC = getAire(a, b, c);
    Fixed aireABP = getAire(a, b, point);
    Fixed aireACP = getAire(a, c, point);
    Fixed aireBCP = getAire(b, c, point);
    if (aireABP == 0 || aireACP == 0 || aireBCP == 0)
        return (false);
    else if (aireABC == (aireABP + aireACP + aireBCP))
            return (true);
    else
        return (false);
}