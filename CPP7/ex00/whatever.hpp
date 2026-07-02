/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 18:38:10 by arouland          #+#    #+#             */
/*   Updated: 2026/07/02 18:55:02 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &x, T &y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T const &	min(T const &x, T const &y)
{
	if (x < y)
		return x;
	return y;
}

template<typename T>
T const &	max(T const &x, T const &y)
{
	if (x > y)
		return x;
	return y;
}

#endif