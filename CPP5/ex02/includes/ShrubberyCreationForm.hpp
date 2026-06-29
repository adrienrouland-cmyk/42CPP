/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 16:38:07 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 18:28:45 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERY_CREATION_FORM_H
# define SHRUBERY_CREATION_FORM_H

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm(void);
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm(ShrubberyCreationForm const &src);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const &rhs);
        
        ShrubberyCreationForm(std::string const target);

        virtual void executeAction(void) const;
    private:
        std::string const _target;
};

#endif