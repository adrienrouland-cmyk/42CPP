/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:23:46 by arouland          #+#    #+#             */
/*   Updated: 2026/06/23 12:38:32 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

int     main(void) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;
    
    std::cout << "Max = " << Fixed::max( a, b ) << std::endl;
    std::cout << "Min = " << Fixed::min( a, b ) << std::endl;
	std::cout << std::boolalpha << "a < b : " << (a < b)  << std::endl;
	std::cout << std::boolalpha << "a > b : " << (a > b)  << std::endl;

	Fixed i(a);
	std::cout << std::boolalpha << "a <= i : " << (a <= i)  << std::endl;
	std::cout << std::boolalpha << "a >= i : " << (a >= i)  << std::endl;

    std::cout << std::endl;
    std::cout << "Other tests" << std::endl << std::endl;

    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;

    Fixed c(1);
    std::cout << "c = " << c << std::endl;
    std::cout << c << " * 2 = " << c * 2 << std::endl;
    std::cout << c << " / 2 = " << c / 2 << std::endl;

    Fixed d(1);
    Fixed e(1);

    std::cout << e << " + " << d << " = " << e + d << std::endl;
    std::cout << e << " - " << d << " = " << e - d << std::endl;
    
    std::cout << std::endl;
    std::cout << "Overflow tests" << std::endl << std::endl;
    Fixed f(500);
    std::cout << f << " * 500 = " << f * 500 << std::endl;

    std::cout << std::endl;
    Fixed g(25);
    Fixed h(0.5f);
    std::cout << g << " / " << h << " = " << g / h << std::endl;

	Fixed j(0.25f);
	Fixed k(0.25f);
	std::cout << j << " * " << k << " = " << j * k << std::endl;
	std::cout << j << " / " << k << " = " << j / k << std::endl;

    return 0;
}