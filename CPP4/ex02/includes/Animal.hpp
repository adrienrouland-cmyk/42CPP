/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:12:20 by arouland          #+#    #+#             */
/*   Updated: 2026/06/24 13:38:06 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <string>

class AAnimal
{
    public:
        AAnimal(void);
        virtual ~AAnimal(void);
        AAnimal(AAnimal const &src);
        AAnimal& operator=(AAnimal const &rhs);
		
		std::string	getType(void) const;
        
		virtual void    makeSound(void) const = 0;
    protected:
        std::string _type;
};

#endif