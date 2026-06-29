/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 16:32:30 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 18:27:19 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45), _target("none")
{}

RobotomyRequestForm::~RobotomyRequestForm(void)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src), _target(src._target)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    if (this != &rhs)
        AForm::operator=(rhs);
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{}

void    RobotomyRequestForm::executeAction(void) const
{
    std::cout << "* DRILLING NOISES*" << std::endl;
    if ((std::rand() % 2) == 0)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "The robotomy failed for " << this->_target << std::endl;
}
