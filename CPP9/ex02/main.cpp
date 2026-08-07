/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 12:51:39 by arouland          #+#    #+#             */
/*   Updated: 2026/08/07 16:45:17 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Error: not enough arguments" << std::endl;
        return (EXIT_FAILURE);
    }

    try 
    {
        PmergeMe sorter;
        sorter.validateArguments(argc, argv);
        sorter.fillVector(argc, argv);
        sorter.fillDeque(argc, argv);
        sorter.printBefore();
        
        sorter.sortVector();
        
        sorter.printAfter();
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return (EXIT_FAILURE);
    }

    return (0);
}