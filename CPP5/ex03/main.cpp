/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 12:54:39 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 19:06:55 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/Intern.hpp"

int main(void)
{
    Intern intern;
    Bureaucrat boss("boss", 1);
    AForm *form = intern.makeForm("presidential pardon", "adrien");
    boss.signForm(*form);
    boss.executeForm(*form);

    delete form;

    try {
        AForm *form2 = intern.makeForm("randomform", "adrien");
        boss.signForm(*form2);
        delete form2;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}