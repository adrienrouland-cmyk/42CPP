/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 10:40:13 by arouland          #+#    #+#             */
/*   Updated: 2026/07/06 11:02:35 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>
#include <algorithm>

template<typename T>
typename T::const_iterator    easyfind(T container, int i);

class NoOcurrence : public std::exception
{
    public:
        const char * what() const throw();
};

#include "easyfind.tpp"

#endif
