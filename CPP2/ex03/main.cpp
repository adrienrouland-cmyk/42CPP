/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:23:46 by arouland          #+#    #+#             */
/*   Updated: 2026/06/18 09:51:19 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

#include <iostream>

int     main(void) 
{
    Point const a(0.0f, 0.0f);
    Point const b(10.0f, 0.0f);
    Point const c(0.0f, 10.0f);

    Point const pInside1(2.0f, 2.0f);
    std::cout << "PInside 1 = " << std::boolalpha << bsp(a, b, c, pInside1) << std::endl;
    
    Point const pInside2(0.0f, 0.0f);
    std::cout << "PInside 2 = " << std::boolalpha << bsp(a, b, c, pInside2) << std::endl;

    Point const pInside3(10.0f, 0.0f);
    std::cout << "PInside 3 = " << std::boolalpha << bsp(a, b, c, pInside3) << std::endl;

    Point const pInside4(0.0f, 10.0f);
    std::cout << "PInside 4 = " << std::boolalpha << bsp(a, b, c, pInside4) << std::endl;

    Point const pInside5(5.0f, 0.0f);
    std::cout << "PInside 5 = " << std::boolalpha << bsp(a, b, c, pInside5) << std::endl;

    Point const pInside6(5.0f, 0.5f);
    std::cout << "PInside 6 = " << std::boolalpha << bsp(a, b, c, pInside6) << std::endl;

    Point const pInside7(-2.0f, -2.0f);
    std::cout << "PInside 7 = " << std::boolalpha << bsp(a, b, c, pInside7) << std::endl;

    Point const pInside8(5.0f, -2.0f);
    std::cout << "PInside 8 = " << std::boolalpha << bsp(a, b, c, pInside8) << std::endl;    

    Point const pInside9(-2.0f, 6.0f);
    std::cout << "PInside 9 = " << std::boolalpha << bsp(a, b, c, pInside9) << std::endl;

}