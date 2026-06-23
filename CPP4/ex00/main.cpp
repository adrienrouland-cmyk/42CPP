/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 19:46:15 by arouland          #+#    #+#             */
/*   Updated: 2026/06/19 21:53:36 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"

int main(void)
{
    Animal *a = new Dog();
    Animal *b = new Cat();

    a->makeSound();
    b->makeSound();

    delete a;
    delete b;

    WrongAnimal *d = new WrongCat();
    d->makeSound();

    delete d;
}