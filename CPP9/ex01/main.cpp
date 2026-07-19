/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 16:51:13 by arouland          #+#    #+#             */
/*   Updated: 2026/07/19 18:40:34 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) 
{
    if (argc != 2)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    RPN rpn;
    rpn.RPNOperations(static_cast<std::string>(argv[1]));
    return 0;
}