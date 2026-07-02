/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 18:55:58 by arouland          #+#    #+#             */
/*   Updated: 2026/07/02 22:37:14 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <stddef.h>
#include <iostream>

template<typename T, typename U>
void iter(T *arr, size_t const length, U func)
{
	for (size_t i = 0; i < length; i++)
		func(arr[i]);
}

template<typename T, typename U>
void iter(T const *arr, size_t const length, U func)
{
	for (size_t i = 0; i < length; i++)
		func(arr[i]);
}

#endif