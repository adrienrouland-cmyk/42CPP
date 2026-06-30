/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 21:32:35 by arouland          #+#    #+#             */
/*   Updated: 2026/06/30 17:41:30 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include <climits>

bool	is_int(std::string input);
bool	is_float(std::string input);
bool	is_double(std::string input);

class ScalarConverter 
{
    private:
        ScalarConverter(void);
        ~ScalarConverter(void);
        ScalarConverter(ScalarConverter const &src);
        ScalarConverter& operator=(ScalarConverter const &rhs);
    public:
        static void convert(std::string input);
};
// Ne doit pas être instantiate, donc canonique private

#endif