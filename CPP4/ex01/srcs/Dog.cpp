/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 19:39:07 by arouland          #+#    #+#             */
/*   Updated: 2026/06/24 13:10:55 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal()
{
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
}

Dog::Dog(Dog const &src) : Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->_brain = NULL; // pour éviter de pointer sur de l'aléatoire avant l'affectation.
	*this = src;
}

Dog& Dog::operator=(Dog const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
        if (this->_brain)
            delete this->_brain;
        if (rhs._brain)
            this->_brain = new Brain(*rhs._brain); // pour déréférencer le pointeur
        else
            this->_brain = NULL;
    }
    return *this;
}

void    Dog::makeSound(void) const
{
    std::cout << "[DOG] BARK BARK BARK" << std::endl;
}