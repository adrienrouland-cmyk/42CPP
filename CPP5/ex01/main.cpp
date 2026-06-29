/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 12:54:39 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 15:01:18 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"

int main(void)
{
    Bureaucrat adrien("adrien", 140);
    Form form("form", 50, 50);

    std::cout << form << std::endl;

    try {
        Bureaucrat adrien2("adrien", 160);
    }
    catch (const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    try {
        Form form2("form2", 151, 130);
    }
    catch (const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    try {
        Form form3("form3", 145, 0);
    }
    catch (const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    adrien.signForm(form);

    std::cout << std::boolalpha << form << std::endl;
    Form success_form("success_form", 145, 145);
    adrien.signForm(success_form);
    std::cout << std::boolalpha << success_form << std::endl;
}