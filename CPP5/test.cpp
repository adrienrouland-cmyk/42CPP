/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 10:14:11 by arouland          #+#    #+#             */
/*   Updated: 2026/06/26 10:28:48 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int    divide(int a, int b)
{
    if (b == 0)
        throw "Division par zéro";
    std::cout << a / b << std::endl;
    return a / b;
}

int main(void)
{
    try {
        divide(10, 0);
    }
    catch (const std::string str) {
        std::cout << str << std::endl;
    }
}