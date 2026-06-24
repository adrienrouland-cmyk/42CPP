/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 19:45:10 by arouland          #+#    #+#             */
/*   Updated: 2026/06/24 13:38:56 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    public:
        Cat(void);
        ~Cat(void);
        Cat(Cat const &src);
        Cat &operator=(Cat const &rhs);
        void    makeSound(void) const;
    private:
        Brain   *_brain;
        
};

#endif