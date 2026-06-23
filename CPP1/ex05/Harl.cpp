/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 19:42:40 by arouland          #+#    #+#             */
/*   Updated: 2026/06/15 22:23:32 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void    Harl::complain(std::string level)
{
    void (Harl::*functions[])(void) const =
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    std::string commands[] = 
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    for (int i = 0; i < 4; i++)
    {
        if (commands[i] == level)
        {
            (this->*functions[i])();
            return ;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void    Harl::debug(void) const
{
    std::cout << "Debug -  love having extra bacon for my " 
        << "7XL-double-cheese-triple-pickle-specialketchup burger. " 
        << "I really do!" << std::endl;
}

void    Harl::info(void) const
{
    std::cout << "Info - I cannot believe adding extra bacon costs more" 
        << " money. You didn’t put enough bacon in my burger!" 
        << " If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void) const
{
    std::cout << "Warning - I think I deserve to have some extra bacon" 
        << " for free. I’ve been coming for years, whereas you started" 
        << " working here just last month" << std::endl;
}

void    Harl::error(void) const
{
    std::cout << "Error - This is unacceptable!" 
        << " I want to speak to the manager now." << std::endl;
}