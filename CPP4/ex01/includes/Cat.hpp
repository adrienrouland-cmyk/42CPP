/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 19:45:10 by arouland          #+#    #+#             */
/*   Updated: 2026/06/19 19:49:09 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        ~Cat(void);
        Cat(Cat const &src);
        Cat &operator=(Cat const &rhs);
        void    makeSound(void) const;
};

#endif