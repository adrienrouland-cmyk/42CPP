/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 12:54:39 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 13:43:39 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"

int main(void)
{
    Bureaucrat adrien("adrien", 140);
    std::cout << adrien << std::endl;
    try {
        Bureaucrat adrien2("adrien", 160);
    }
    catch (const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    try {
        Bureaucrat adrien3("adrien", 0);
    }
    catch (const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    
    for (int i = 0; i < 15; i++)
    {
        try {
            adrien.decrementGrade();
        }
        catch (const Bureaucrat::GradeTooLowException& e) {
            std::cerr << e.what() << std::endl;
        }
        catch (const Bureaucrat::GradeTooHighException& e) {
            std::cerr << e.what() << std::endl;
        }
    }
}