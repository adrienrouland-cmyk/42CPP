/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 12:47:36 by arouland          #+#    #+#             */
/*   Updated: 2026/08/06 18:15:08 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    
}

PmergeMe::~PmergeMe()
{
    
}

PmergeMe::PmergeMe(const PmergeMe &src) : _vector(src._vector), _deque(src._deque)
{

}

PmergeMe& PmergeMe::operator=(const PmergeMe &rhs)
{
    if (this != &rhs)
    {
        this->_vector = rhs._vector;
        this->_deque = rhs._deque;
    }
    return *this;
}

void    PmergeMe::validateArguments(int argc, char **argv) const
{
    for (int i = 1; i < argc; i++)
    {
        std::string arg(argv[i]);

        if (arg.empty())
            throw std::runtime_error("empty argument");

        for (std::size_t j = 0; j < arg.length(); j++)
        {
            if (arg[j] < '0' || arg[j] > '9')
                throw std::runtime_error("invalid character");
        }

        int value = 0;
        for (std::size_t j = 0; j < arg.length(); j++)
        {
            int digit = arg[j] - '0';
            
            if (value > (std::numeric_limits<int>::max() - digit) / 10)
                throw std::runtime_error("number is too large");

            value = value * 10 + digit;
        }

        if (value == 0)
            throw std::runtime_error("zero is an invalid argument");
    }
}

void    PmergeMe::fillVector(int argc, char **argv)
{
    this->_vector.clear();
    
    for (int i = 1; i < argc; ++i)
    {
        std::stringstream argStream(argv[i]);
        int value;

        if (!(argStream >> value))
            throw std::runtime_error("conversion failed");

        this->_vector.push_back(value);
    }
}

void    PmergeMe::fillDeque(int argc, char **argv)
{
    this->_deque.clear();
    
    for (int i = 1; i < argc; ++i)
    {
        std::stringstream argStream(argv[i]);
        int value;

        if (!(argStream >> value))
            throw std::runtime_error("conversion failed");

        this->_deque.push_back(value);
    }
}

void    PmergeMe::printBefore() const
{
    std::cout << "Before:";
    
    for (std::vector<int>::const_iterator it = _vector.begin(); it != _vector.end(); ++it)
        std::cout << " " << *it;
        
    std::cout << std::endl;
}

std::vector<std::pair<int, int> > PmergeMe::createVectorPairs(const std::vector<int> &container) const
{
    std::vector<std::pair<int, int> > pairs;

    for (std::size_t i = 0; i + 1 < container.size(); i += 2)
    {
        int first = container[i];
        int second = container[i + 1];

        if (first <= second)
            pairs.push_back(std::make_pair(first, second));
        else
            pairs.push_back(std::make_pair(second, first));
    }
    return pairs;
}

void    sortVector(std::vector<int> &container)
{
    (void)container;
}