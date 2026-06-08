/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:30:06 by arouland          #+#    #+#             */
/*   Updated: 2026/06/08 15:37:03 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

std::string trunc_ten(std::string to_trunc)
{
	if (to_trunc.length() < 10)
		return (to_trunc);
	else
		return (to_trunc.substr(0, 9) + ".");
}
