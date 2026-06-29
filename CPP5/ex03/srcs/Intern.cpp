/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 18:32:13 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 19:20:44 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern(void)
{}

Intern::~Intern(void)
{}

Intern::Intern(Intern const &src)
{
    *this = src;
}

Intern& Intern::operator=(Intern const &rhs)
{
    (void)rhs;
    return *this;
}

AForm*  Intern::_makeRobotomy(std::string const &target)
{
    return new RobotomyRequestForm(target);
}

AForm*  Intern::_makePresidential(std::string const &target)
{
    return new PresidentialPardonForm(target);
}

AForm*  Intern::_makeShrubbery(std::string const &target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeForm(std::string const formName, std::string const target)
{
    AForm* (Intern::*forms[])(std::string const &target) = {
        &Intern::_makeRobotomy,
        &Intern::_makePresidential,
        &Intern::_makeShrubbery
    };

    std::string names[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    for (int i = 0; i < 3; i++)
    {
        if (formName == names[i])
        {
            std::cout << "Intern creates " << names[i] << std::endl;
            return (this->*forms[i])(target);
        }
    }
    throw FormNameError();
}

const char * Intern::FormNameError::what() const throw()
{
    return ("error: cannot create form: wrong form name");
}