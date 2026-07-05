/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 00:58:01 by arouland          #+#    #+#             */
/*   Updated: 2026/07/06 01:45:30 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(void) :  _size(0), _array(NULL)
{
    
}

template<typename T>
Array<T>::~Array(void)
{
    delete [] this->_array;
}

template<typename T>
Array<T>::Array(Array<T> const &src) : _size(0), _array(NULL)
{
    *this = src;
}

template<typename T>
Array<T> & Array<T>::operator=(Array const &rhs)
{
    if (this != &rhs)
    {
        delete [] this->_array;
        this->_size = rhs._size;
        this->_array = new T[rhs._size];
        for (unsigned int i = 0; i < this->_size; i++)
            this->_array[i] = rhs._array[i];
    }   
    return *this;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), _array(new T[n])
{
    
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= this->_size)
        throw OutRange();
    return this->_array[index];
}

template<typename T>
T const & Array<T>::operator[](unsigned int index) const
{
    if (index >= this->_size)
        throw OutRange();
    return this->_array[index];
}

template<typename T>
unsigned int Array<T>::size(void) const 
{
    return this->_size;
}

template<typename T>
const char* Array<T>::OutRange::what() const throw()
{
    return "[ERROR] Index is out of range";
}
