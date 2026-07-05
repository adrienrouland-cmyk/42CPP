/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 22:40:30 by arouland          #+#    #+#             */
/*   Updated: 2026/07/06 01:59:03 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template<typename T>
class Array
{
    public:
        Array(void);
        ~Array(void);
        Array(Array const &src);
        Array& operator=(Array const &rhs);
        
        Array(unsigned int n);
        T& operator[](unsigned int index);
        T const & operator[](unsigned int index) const;

        unsigned int size(void) const;

        class OutRange : public std::exception
        {
            public:
                virtual const char * what() const throw();
        };
    private:
        unsigned int _size;
        T* _array;
};

#endif

#include "Array.tpp"