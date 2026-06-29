/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 21:47:27 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 21:49:00 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ScalarConverter.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Wrong arguments : ./convert [to_convert]" << std::endl;
        return (1);
    }
    std::string input = argv[1];
    ScalarConverter::convert(input);
    return (0);
}