/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 11:02:55 by arouland          #+#    #+#             */
/*   Updated: 2026/07/02 11:04:37 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

#include "Data.hpp"

class Serializer
{
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uinptr_t raw);
    private:
        Serializer(void);
        ~Serializer(void);
        Serializer(Serializer const &src);
        Serializer& operator=(Serializer const &rhs);
};

#endif