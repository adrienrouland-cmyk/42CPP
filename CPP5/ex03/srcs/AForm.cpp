/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:08:02 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 16:27:29 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

AForm::AForm(void) : _name("default"), _signed(false), _signGrade(150), _execGrade(150)
{
   
}

AForm::~AForm(void)
{
    
}

AForm::AForm(AForm const &src) : _name(src.getName()), _signed(src.getSigned()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
}

AForm& AForm::operator=(AForm const &rhs)
{
    if (this != &rhs)
    {
        this->_signed = rhs._signed;
    }
    return *this;
}

/********** Constructors **********/

AForm::AForm(std::string name, const int signGrade, const int execGrade) : _name(name), _signed(false), _signGrade(checkGrade(signGrade)), _execGrade(checkGrade(execGrade))
{
    
}

int     AForm::checkGrade(int grade)
{
    if (grade < 1)
        throw AForm::GradeTooHighException("[FORM] Grade is too high (maximum is 1)");
    else if (grade > 150)
        throw AForm::GradeTooLowException("[FORM] Grade is too low (minimum is 150)");
    else
        return grade;
}

/********** Getters & Setters **********/

std::string const &AForm::getName(void) const
{
    return this->_name;
}

bool    AForm::getSigned(void) const
{
    return this->_signed;
}

int   AForm::getSignGrade(void) const 
{
    return this->_signGrade;
}

int   AForm::getExecGrade(void) const
{
    return this->_execGrade;
}

/********** Member functions **********/

void    AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->_signGrade)
        this->_signed = true;
    else
        throw AForm::GradeTooLowException("[SIGN ERROR] Grade is too low to sign the form");
}

void    AForm::execute(Bureaucrat const &executor) const
{
    if (this->_signed == false)
        throw AForm::NotSigned();
    else if (executor.getGrade() > this->getExecGrade())
        throw AForm::GradeTooLowException("[EXEC ERROR] Grade is too low to execute the form");
    else
        this->executeAction();
}

/********** Classes **********/

AForm::GradeTooHighException::GradeTooHighException(const char *msg) : _msg(msg)
{}

const char * AForm::GradeTooHighException::what() const throw()
{
    return this->_msg;
}

AForm::GradeTooLowException::GradeTooLowException(const char *msg) : _msg(msg)
{}

const char * AForm::GradeTooLowException::what() const throw()
{
    return this->_msg;
}

const char * AForm::NotSigned::what() const throw()
{
    return ("[SIGN ERROR] Form is not signed");
}

/********** Operator overloard **********/

std::ostream& operator<<(std::ostream &o, AForm const &rhs)
{
    o << rhs.getName() << ", AForm signGrade " << rhs.getSignGrade() << " execGrade " << rhs.getExecGrade() << " signed " << rhs.getSigned() << ".";
    return o;
}