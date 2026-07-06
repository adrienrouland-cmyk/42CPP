/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 14:24:40 by arouland          #+#    #+#             */
/*   Updated: 2026/07/06 15:06:41 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{
		std::cout << "subject tests" << std::endl;
		Span sp = Span(5);
		try {
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << "negative numbers tests" << std::endl;
		Span sp = Span(3);
		try {
			sp.addNumber(-10);
			sp.addNumber(10);
			sp.addNumber(-9);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << "too much numbers tests" << std::endl;
		Span sp = Span(2);
		try {
			sp.addNumber(-10);
			sp.addNumber(10);
			sp.addNumber(-9);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
			std::cout << "test failed";
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}


	{
		std::cout << std::endl << "empty tests" << std::endl;
		Span empty(5);
		try {
			std::cout << empty.shortestSpan() << std::endl;
		}	
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << empty.longestSpan() << std::endl;
		}	
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << "one element tests" << std::endl;
		Span oneElem(5);
		try {
			std::cout << oneElem.shortestSpan() << std::endl;
		}	
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << oneElem.longestSpan() << std::endl;
		}	
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << "addRangeIterator from vector tests" << std::endl;
		std::vector<int> v;
		v.push_back(6);
		v.push_back(10);
		v.push_back(4);
		v.push_back(3);
		v.push_back(200);

		Span it(10);
		try
		{
			it.addRangeIterators(v.begin(), v.end());
			std::cout << it.shortestSpan() << std::endl;
			std::cout << it.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		std::cout << std::endl << "addRangeIterator from list tests" << std::endl;
		std::list<int> v;
		v.push_back(6);
		v.push_back(10);
		v.push_back(4);
		v.push_back(3);
		v.push_back(200);

		Span it(10);
		try
		{
			it.addRangeIterators(v.begin(), v.end());
			std::cout << it.shortestSpan() << std::endl;
			std::cout << it.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		std::cout << std::endl << "addRangeIterator from tab tests" << std::endl;
		int arr[] = {8, 3, 15, 1 ,9};

		Span it(10);
		try
		{
			it.addRangeIterators(arr, arr + 5);
			std::cout << it.shortestSpan() << std::endl;
			std::cout << it.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		std::cout << std::endl << "addRangeIterator with 10000 tests" << std::endl;
		std::vector<int> big;
		for (int i = 0; i < 10000; ++i)
			big.push_back(i);
		Span sp(10000);
		try
		{
			sp.addRangeIterators(big.begin(), big.end());
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	return 0;
}