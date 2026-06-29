/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 20:55:24 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 13:43:32 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{}

Bureaucrat::~Bureaucrat(void)
{}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name), _grade(src._grade)
{
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (this != &rhs)
    {
        this->_grade = rhs._grade;
    }
    return *this;
}
// constant name

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
}

std::string const &Bureaucrat::getName(void) const 
{
    return this->_name;
}

int Bureaucrat::getGrade(void) const 
{
    return this->_grade;
}

void    Bureaucrat::incrementGrade(void)
{
    if (this->_grade > 1)
        this->_grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void    Bureaucrat::decrementGrade(void)
{
    if (this->_grade < 150)
        this->_grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream &o, Bureaucrat const &rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
    return o;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high (maximum is 1)");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low (minimum is 150)");
}