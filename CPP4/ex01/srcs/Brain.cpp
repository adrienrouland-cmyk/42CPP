/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 19:23:07 by arouland          #+#    #+#             */
/*   Updated: 2026/06/24 12:10:26 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain& Brain::operator=(Brain const &rhs)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = rhs._ideas[i];
    return *this;
}