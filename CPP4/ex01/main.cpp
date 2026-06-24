/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 19:46:15 by arouland          #+#    #+#             */
/*   Updated: 2026/06/24 13:13:32 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"
#include <iostream>

int main(void)
{
   	Animal *arrAnimals[10]; // Tableau de pointeurs
	for (int i = 0; i < 5; i++)
		arrAnimals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		arrAnimals[i] = new Cat();

	for (int i = 0; i < 10; i++)
		arrAnimals[i]->makeSound();

	for (int i = 0; i < 10; i++)
		delete arrAnimals[i];
}