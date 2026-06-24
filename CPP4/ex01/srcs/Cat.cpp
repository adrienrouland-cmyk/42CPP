/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 19:45:05 by arouland          #+#    #+#             */
/*   Updated: 2026/06/24 13:20:05 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal()
{
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
}

Cat::Cat(Cat const &src) : Animal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->_brain = NULL; // pour éviter de pointer sur de l'aléatoire avant l'affectation.
	*this = src;
}

Cat& Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
        if (this->_brain)
            delete this->_brain;
        if (rhs._brain)
            this->_brain = new Brain(*rhs._brain);
        else
            this->_brain = NULL;
    }
    return *this;
}

void    Cat::makeSound(void) const
{
    std::cout << "[CAT] MIAOU MIAOU MIAOU" << std::endl;
}