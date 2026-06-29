/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 12:54:39 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 17:23:59 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/RobotomyRequestForm.hpp"

int main(void)
{
    std::srand(std::time(NULL));
    Bureaucrat adrien("adrien", 20);
    PresidentialPardonForm pres("moi");

    adrien.executeForm(pres);
    adrien.signForm(pres);
    adrien.executeForm(pres);

    Bureaucrat shruberry_sign("adrienSHRUB_sign", 140);
    Bureaucrat shruberry_exec("adrienSHRUB_exec", 130);
    ShrubberyCreationForm shrub("home");
    ShrubberyCreationForm shrub2("home");

    shruberry_sign.executeForm(shrub);
    shruberry_sign.signForm(shrub);
    shruberry_sign.executeForm(shrub);

    shruberry_exec.executeForm(shrub2);
    shruberry_exec.signForm(shrub2);
    shruberry_exec.executeForm(shrub2);

    Bureaucrat robotomy_sign("adrienROBOT_sign", 70);
    Bureaucrat robotomy_exec("adrienROBOT_exec", 40);
    RobotomyRequestForm rob("evil");
    RobotomyRequestForm rob2("evil");

    robotomy_sign.executeForm(rob);
    robotomy_sign.signForm(rob);
    robotomy_sign.executeForm(rob);

    robotomy_exec.executeForm(rob2);
    robotomy_exec.signForm(rob2);
    robotomy_exec.executeForm(rob2);

    Bureaucrat pres_sign("adrienPRES_sign", 20);
    Bureaucrat pres_exec("adrienPRES_exec", 1);
    PresidentialPardonForm pres2("ad");
    PresidentialPardonForm pres3("ad");

    pres_sign.executeForm(pres2);
    pres_sign.signForm(pres2);
    pres_sign.executeForm(pres2);

    pres_exec.executeForm(pres3);
    pres_exec.signForm(pres3);
    pres_exec.executeForm(pres3);
}