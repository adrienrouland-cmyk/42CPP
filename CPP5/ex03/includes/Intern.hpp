/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 18:32:12 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 19:16:51 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <string>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;

class Intern
{
    public:
        Intern(void);
        ~Intern(void);
        Intern(Intern const &src);
        Intern& operator=(Intern const &rhs);

        AForm*    makeForm(std::string const formName, std::string const target);

        class   FormNameError : public std::exception
        {
            public:
                virtual const char * what() const throw();
        };
    private:
        AForm* _makeRobotomy(std::string const &target);
        AForm* _makeShrubbery(std::string const &target);
        AForm* _makePresidential(std::string const &target);
};

#endif