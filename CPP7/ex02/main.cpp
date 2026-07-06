/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 22:58:13 by arouland          #+#    #+#             */
/*   Updated: 2026/07/06 10:41:59 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <iomanip>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> tab(5);
    for (unsigned int i = 0; i < tab.size(); i++)
        tab[i] = i;
    for (unsigned int i = 0; i < tab.size() + 1; i++)
    {
        try {
            std::cout << std::fixed << "tab[" << i << "] : " << tab[i] << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    Array<float> tab2(5);
    for (unsigned int i = 0; i < tab2.size(); i++)
        tab2[i] = i;
    for (unsigned int i = 0; i < tab2.size() + 1; i++)
    {
        try {
            std::cout << std::fixed << std::setprecision(1) << "tab2[" << i << "] : " << tab2[i] << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}