/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:08:03 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 16:18:21 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    public:
        AForm(void);
        virtual ~AForm(void);
        AForm(AForm const &src);
        AForm& operator=(AForm const &rhs);

        AForm(std::string name, const int signGrade, const int execGrade);
        
        std::string const &getName(void) const;
        bool getSigned(void) const;
        int getSignGrade(void) const;
        int getExecGrade(void) const;

        void    beSigned(Bureaucrat &bureaucrat);
        void execute(Bureaucrat const &executor) const; // Check requirements
        virtual void executeAction(void) const = 0;
        
        class GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException(const char *msg);
                virtual const char * what() const throw();
            private:
                const char *_msg;
        };
        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException(const char *msg);
                virtual const char * what() const throw();
            private:
                const char *_msg;
        };
        class NotSigned : public std::exception
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

std::ostream& operator<<(std::ostream &o, AForm const &rhs);

#endif