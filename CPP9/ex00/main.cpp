/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 12:03:01 by arouland          #+#    #+#             */
/*   Updated: 2026/08/07 18:36:18 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: could not open file" << std::endl;
        return 1;
    }

    BitcoinExchange btc;

    if (btc.loadDatabase("data.csv"))
        btc.processInput(argv[1]);
    return 0;
}