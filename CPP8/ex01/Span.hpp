/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 12:03:17 by arouland          #+#    #+#             */
/*   Updated: 2026/07/06 15:03:41 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <exception>
#include <list>
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>

class Span
{
	public:
		Span(void);
		~Span(void);
		Span(Span const &src);
		Span& operator=(Span const &rhs);

		Span(unsigned int N);

		void addNumber(int n);
		int		shortestSpan(void);
		int		longestSpan(void);
		template<typename T>
		void addRangeIterators(T first, T last)
		{
			if (static_cast<long>((std::distance(first, last) + this->_tab.size())) > this->_maxElem)
				throw MaxNumber();
			this->_tab.insert(this->_tab.end(), first, last);
		}
		
		class MaxNumber : public std::exception
		{
			public:
				const char * what() const throw();	
		};
		class NoSpanPossible : public std::exception
		{
			public: 
				const char * what() const throw();
		};
		
	private:
		unsigned int		_maxElem;
		std::vector<int>	_tab;
};

#endif