/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:12:20 by arouland          #+#    #+#             */
/*   Updated: 2026/06/19 18:27:39 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <string>

class Animal
{
    public:
        Animal(void);
        ~Animal(void);
        Animal(Animal const &src);
        Animal& operator=(Animal const &rhs);
        void    makeSound(void) const;
    protected:
        std::string _type;
};

#endif