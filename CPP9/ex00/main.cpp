/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 12:03:01 by arouland          #+#    #+#             */
/*   Updated: 2026/07/17 13:51:34 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: cound not open file" << std::endl;
        return 1;
    }

    BitcoinExchange btc;

    btc.loadDatabase(argv[1]);
    // btc.printDB();
    std::cout << "rate for 2022-03-04 (39141.2) = " << btc.getRateForDate("2022-03-04") << std::endl;
}