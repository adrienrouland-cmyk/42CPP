/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 12:51:39 by arouland          #+#    #+#             */
/*   Updated: 2026/08/07 16:53:14 by arouland         ###   ########.fr       */
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
        
        std::clock_t sortVectorStart = std::clock();
        sorter.sortVector();
        std::clock_t sortVectorEnd = std::clock();
        double vectorTime = static_cast<double>(sortVectorEnd - sortVectorStart) * 1000000.0 / CLOCKS_PER_SEC;
        
        sorter.printAfter();
        std::cout << "Time to process a range of " << (argc - 1) << " elements with std::vector: " << std::fixed << std::setprecision(3) << vectorTime << " us" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return (EXIT_FAILURE);
    }

    return (0);
}