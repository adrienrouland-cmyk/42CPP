/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 12:47:36 by arouland          #+#    #+#             */
/*   Updated: 2026/08/07 12:43:41 by arouland         ###   ########.fr       */
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

    std::size_t nbDisplay = this->_vector.size();

    if (nbDisplay > 5)
        nbDisplay = 4;
    
    for (std::size_t i = 0; i < nbDisplay; i++)
        std::cout << " " << this->_vector[i];

    if (this->_vector.size() > 5)
        std::cout << " [...]";
        
    std::cout << std::endl;
}

void    PmergeMe::printAfter() const
{
    std::cout << "After:";

    std::size_t nbDisplay = this->_vector.size();

    if (nbDisplay > 5)
        nbDisplay = 4;
    
    for (std::size_t i = 0; i < nbDisplay; i++)
        std::cout << " " << this->_vector[i];

    if (this->_vector.size() > 5)
        std::cout << " [...]";
        
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

void    PmergeMe::sortVector()
{
    this->fordJohnsonVector(this->_vector);
}

void    PmergeMe::fordJohnsonVector(std::vector<int> &container)
{
    if (container.size() <= 1)
        return ;

    std::vector<std::pair<int, int> > pairs = createVectorPairs(container);

    std::vector<int>    sortedLargerValues;
    for (std::vector<std::pair<int, int> >::iterator pairsIt = pairs.begin(); pairsIt != pairs.end(); ++pairsIt)
        sortedLargerValues.push_back(pairsIt->second);

    this->fordJohnsonVector(sortedLargerValues);
    this->reorderPairsByLargerValues(pairs, sortedLargerValues);

    std::vector<int> result;
    result.reserve(container.size());
    this->fillVectorResult(result, pairs);

    std::vector<std::pair<int, int> > pendingPairs;
    for (size_t i = 1; i < pairs.size(); ++i)
        pendingPairs.push_back(pairs[i]);
    if (container.size() % 2 != 0)
        pendingPairs.push_back(container.back(), -1);

    
}

void    PmergeMe::reorderPairsByLargerValues(std::vector<std::pair<int, int> > &pairs, const std::vector<int> &sortedLargerValues) const
{
    for (std::size_t sortedIndex = 0; sortedIndex < sortedLargerValues.size(); ++sortedIndex)
    {
        std::size_t pairsIndex = sortedIndex;
        
        while (pairsIndex < pairs.size() && pairs[pairsIndex].second != sortedLargerValues[sortedIndex])
            ++pairsIndex;
            
        if (pairsIndex == pairs.size())
            throw std::runtime_error("failed to reorder pairs");

        if (pairsIndex != sortedIndex)
            std::swap(pairs[pairsIndex], pairs[sortedIndex]);
    }
}

void    PmergeMe::fillVectorResult(std::vector<int> &result, const std::vector<std::pair<int, int> > &pairs) const
{
    result.push_back(pairs[0].first);
    for (std::vector<std::pair<int, int> >::iterator pairsIt = pairs.begin(); pairsIt != pairs.end(); ++pairsIt)
    {
        result.push_back(pairsIt->second);
    }
}

std::vector<std::size_t>    PmergeMe::getVectorJacobsthalOrder(std::size_t nbToInsert) const
{
    
}