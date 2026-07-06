/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 10:40:12 by arouland          #+#    #+#             */
/*   Updated: 2026/07/06 12:00:27 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>

int main(void)
{
    std::list<int> lst;

    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(5);
    lst.push_back(3);

    try 
    {
        std::cout << "for " << 3 << " : " << *easyfind(lst, 3) << std::endl;
        std::cout << "for " << 6 << " : " << *easyfind(lst, 6) << std::endl;
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::vector<int> vect;

    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    vect.push_back(5);
    vect.push_back(3);

    try 
    {
        std::cout << "for " << 3 << " : " << *easyfind(vect, 3) << std::endl;
        std::cout << "for " << 6 << " : " << *easyfind(vect, 6) << std::endl;
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
