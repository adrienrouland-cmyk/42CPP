/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 13:31:44 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 15:02:25 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

/********** Canonical Form **********/

Form::Form(void) : _name("default"), _signed(false), _signGrade(150), _execGrade(150)
{
   
}

Form::~Form(void)
{
    
}

Form::Form(Form const &src) : _name(src.getName()), _signed(src.getSigned()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
}

Form& Form::operator=(Form const &rhs)
{
    if (this != &rhs)
    {
        this->_signed = rhs._signed;
    }
    return *this;
}

/********** Constructors **********/

Form::Form(std::string name, const int signGrade, const int execGrade) : _name(name), _signed(false), _signGrade(checkGrade(signGrade)), _execGrade(checkGrade(execGrade))
{
    
}

int     Form::checkGrade(int grade)
{
    if (grade < 1)
        throw Form::GradeTooHighException();
    else if (grade > 150)
        throw Form::GradeTooLowException();
    else
        return grade;
}

/********** Getters & Setters **********/

std::string const &Form::getName(void) const
{
    return this->_name;
}

bool    Form::getSigned(void) const
{
    return this->_signed;
}

int   Form::getSignGrade(void) const 
{
    return this->_signGrade;
}

int   Form::getExecGrade(void) const
{
    return this->_execGrade;
}

/********** Member functions **********/

void    Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->_signGrade)
        this->_signed = true;
    else
        throw Form::GradeTooLowException();
}

/********** Classes **********/

const char * Form::GradeTooHighException::what() const throw()
{
    return ("[FORM] Grade is too high (maximum is 1)");
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("[FORM] Grade is too low (minimum is 150)");
}

/********** Operator overloard **********/

std::ostream& operator<<(std::ostream &o, Form const &rhs)
{
    o << rhs.getName() << ", form signGrade " << rhs.getSignGrade() << " execGrade " << rhs.getExecGrade() << " signed " << rhs.getSigned() << ".";
    return o;
}