/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:42:41 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 16:33:24 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5), _target("none")
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src), _target(src._target)
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    if (this != &rhs)
        AForm::operator=(rhs);
    return *this;
}
// Tous les attributs sont constants

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

void    PresidentialPardonForm::executeAction(void) const
{
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
