/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 17:54:55 by arouland          #+#    #+#             */
/*   Updated: 2026/06/23 13:51:08 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point
{
    public:
        Point(void);
        Point(Point const &src);
        ~Point(void);
        Point &operator=(Point const &rhs);

        Point(float const z1, float const z2);
        Fixed   getX(void) const;
        Fixed   getY(void) const;
    private:
        Fixed const _x;
        Fixed const _y;
};

Fixed   getAire(Point const a, Point const b, Point const c);
bool 	bsp(Point const a, Point const b, Point const c, Point const point);

#endif