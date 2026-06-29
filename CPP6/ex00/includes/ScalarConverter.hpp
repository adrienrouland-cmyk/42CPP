/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 21:32:35 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 21:37:20 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#include <string>

class ScalarConverter 
{
    public:
        ScalarConverter(void);
        ~ScalarConverter(void);
        ScalarConverter(ScalarConverter const &src);
        ScalarConverter& operator=(ScalarConverter const &rhs);
        
        static void convert(std::string str);
};

#endif