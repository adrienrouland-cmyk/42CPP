/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 19:42:42 by arouland          #+#    #+#             */
/*   Updated: 2026/06/11 20:32:23 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <string>
#include <iostream>

class Harl
{
    public:
        Harl(void);
        ~Harl(void);
        void    complain(std::string level);
    private:
        void    debug(void) const;
        void    info(void) const;
        void    warning(void) const;
        void    error(void) const;
};

#endif