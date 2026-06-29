/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 16:52:27 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 18:27:55 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137), _target("none")
{}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src), _target(src._target)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    if (this != &rhs)
        AForm::operator=(rhs);
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{}

void    ShrubberyCreationForm::executeAction(void) const
{
    std::string file_name = this->_target + "_shrubbery";
    std::ofstream outfile(file_name.c_str());
    outfile << "  @@@" << std::endl;
    outfile << " @@@@@" << std::endl;
    outfile << "@@@@@@@" << std::endl;
    outfile << "   ||  " << std::endl;
    outfile << "   ||  " << std::endl;
    outfile.close();
}
