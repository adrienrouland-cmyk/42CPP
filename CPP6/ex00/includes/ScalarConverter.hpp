/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 21:32:35 by arouland          #+#    #+#             */
/*   Updated: 2026/06/29 21:42:04 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#include <string>

class ScalarConverter 
{
    private:
        ScalarConverter(void);
        ~ScalarConverter(void);
        ScalarConverter(ScalarConverter const &src);
        ScalarConverter& operator=(ScalarConverter const &rhs);
    public:
        static void convert(std::string str);
};
// Ne doit pas être instantiate, donc canonique private


#endif