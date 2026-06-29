/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:42:36 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 18:29:03 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_H
# define PRESIDENTIAL_PARDON_FORM_H

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm(void);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm(PresidentialPardonForm const &src);
        PresidentialPardonForm& operator=(PresidentialPardonForm const &rhs);
        
        PresidentialPardonForm(std::string const target);
        
        virtual void    executeAction(void) const;
        
    private:
        std::string const _target;
};

#endif