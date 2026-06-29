/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 20:55:23 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 14:52:09 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    public:
        Bureaucrat(void);
        ~Bureaucrat(void);
        Bureaucrat(Bureaucrat const &src);
        Bureaucrat& operator=(Bureaucrat const &rhs);
        
        Bureaucrat(std::string name, int grade);
        
        std::string const &getName(void) const;
        int getGrade(void) const;
        
        void    incrementGrade(void);
        void    decrementGrade(void);
        void    signForm(Form &form);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char * what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char * what() const throw();
        };
        
    private:
        std::string const _name;
        int _grade;
};

std::ostream& operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif