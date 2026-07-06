/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 12:03:15 by arouland          #+#    #+#             */
/*   Updated: 2026/07/06 14:39:29 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _maxElem(0), _tab()
{
	
}

Span::~Span(void)
{

}

Span::Span(Span const &src)
{
	*this = src;
}

Span& Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_maxElem = rhs._maxElem;
		this->_tab = rhs._tab;
	}
	return *this;
}

Span::Span(unsigned int N) : _maxElem(N), _tab()
{
	
}

void	Span::addNumber(int n)
{
	if (this->_maxElem > this->_tab.size())
		this->_tab.push_back(n);
	else
		throw MaxNumber();
}

int	Span::shortestSpan(void)
{
	if (this->_tab.size() < 2)
		throw NoSpanPossible();
	
	std::vector<int> sorted(this->_tab);
	std::sort(sorted.begin(), sorted.end());
	int dist = sorted[1] - sorted[0];
	for (unsigned int i = 2; i < sorted.size(); ++i)
	{
		int diff = sorted[i] - sorted[i - 1];
		if (diff < dist)
			dist = diff;
	}
	return dist;
}

int	Span::longestSpan(void)
{
	if (this->_tab.size() < 2)
		throw NoSpanPossible();
	
	int min = *std::min_element(this->_tab.begin(), this->_tab.end());
	int max = *std::max_element(this->_tab.begin(), this->_tab.end());

	return (max - min);
}

const char * Span::MaxNumber::what() const throw()
{
	return "[ERROR] Cannot add elements: tab is full";
}

const char * Span::NoSpanPossible::what() const throw()
{
	return "[ERROR] Not enough elements to find span";
}