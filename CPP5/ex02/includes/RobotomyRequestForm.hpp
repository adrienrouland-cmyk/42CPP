/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 16:30:16 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 18:28:55 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_H
# define ROBOTOMY_REQUEST_FORM_H

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm(void);
        ~RobotomyRequestForm(void);
        RobotomyRequestForm(RobotomyRequestForm const &src);
        RobotomyRequestForm& operator=(RobotomyRequestForm const &rhs);
        
        RobotomyRequestForm(std::string const target);

        virtual void executeAction(void) const;

    private:
        std::string const _target;
        
};

#endif