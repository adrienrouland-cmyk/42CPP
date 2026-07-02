/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 11:02:55 by arouland          #+#    #+#             */
/*   Updated: 2026/07/02 12:55:03 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

#include <stdint.h>
#include "Data.hpp"
#include <iostream>

class Serializer
{
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
	private:
		Serializer(void);
		~Serializer(void);
        Serializer(Serializer const &src);
        Serializer& operator=(Serializer const &rhs);
};

#endif