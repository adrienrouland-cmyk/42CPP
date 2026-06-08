/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:32:16 by arouland          #+#    #+#             */
/*   Updated: 2026/06/08 17:20:54 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_H
# define PHONE_H

#include <iostream>
#include <iomanip>
#include <cstdlib>

std::string trunc_ten(std::string to_trunc);
bool is_valid_index(std::string index);
std::string get_line(std::string prompt);

# endif