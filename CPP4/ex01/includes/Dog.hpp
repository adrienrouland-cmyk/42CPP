/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 19:39:06 by arouland          #+#    #+#             */
/*   Updated: 2026/06/24 13:10:02 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        ~Dog(void);
        Dog(Dog const &src);
        Dog &operator=(Dog const &rhs);
        void    makeSound(void) const;
    private:
        Brain   *_brain;
};

#endif