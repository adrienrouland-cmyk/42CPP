/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 13:31:45 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 14:51:59 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form(void);
        ~Form(void);
        Form(Form const &src);
        Form& operator=(Form const &rhs);

        Form(std::string name, const int signGrade, const int execGrade);
        
        std::string const &getName(void) const;
        bool getSigned(void) const;
        int getSignGrade(void) const;
        int getExecGrade(void) const;

        void    beSigned(Bureaucrat &bureaucrat);
        
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
        bool    _signed;
        int const _signGrade;
        int const _execGrade;
        int checkGrade(int signGrade);
};

std::ostream& operator<<(std::ostream &o, Form const &rhs);

#endif