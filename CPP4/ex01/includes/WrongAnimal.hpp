/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 19:57:38 by arouland          #+#    #+#             */
/*   Updated: 2026/06/19 19:58:14 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <string>

class WrongAnimal
{
    public:
        WrongAnimal(void);
        ~WrongAnimal(void);
        WrongAnimal(WrongAnimal const &src);
        WrongAnimal& operator=(WrongAnimal const &rhs);
        void    makeSound(void) const;
    protected:
        std::string _type;
};

#endif