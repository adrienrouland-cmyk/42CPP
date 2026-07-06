/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 10:40:19 by arouland          #+#    #+#             */
/*   Updated: 2026/07/06 11:02:25 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
typename T::const_iterator    easyfind(T container, int i)
{
    typename T::const_iterator it;
    it = std::find(container.begin(), container.end(), i);
    if (it != container.end())
        return it;
    throw NoOcurrence();
}

const char* NoOcurrence::what() const throw()
{
    return "No ocurrence found";
}