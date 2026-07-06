/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:15:21 by arouland          #+#    #+#             */
/*   Updated: 2026/07/06 15:48:07 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack(void);
		~MutantStack(void);
		MutantStack(MutantStack const &src);
		MutantStack& operator=(MutantStack const &rhs);

		iterator begin(void);
		iterator end(void);
};

#include "MutantStack.tpp"

#endif