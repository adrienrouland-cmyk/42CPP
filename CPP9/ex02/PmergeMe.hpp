/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 12:47:35 by arouland          #+#    #+#             */
/*   Updated: 2026/08/07 17:43:30 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>
#include <utility>

#include <iostream>
#include <sstream>
#include <stdexcept>
#include <limits>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <algorithm>

class PmergeMe
{
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe &src);
        PmergeMe& operator=(const PmergeMe &rhs);

        void    validateArguments(int argc, char **argv) const;
        void    fillVector(int argc, char **argv);
        void    fillDeque(int argc, char **argv);
        void    printBefore() const;
        void    sortVector();
        void    sortDeque();
        void    printAfter() const;
    private:
        std::vector<int>    _vector;
        std::deque<int>     _deque;

        std::vector<std::pair<int, int> >   createVectorPairs(const std::vector<int> &container) const;
        void                                fordJohnsonVector(std::vector<int> &container);
        void                                reorderVectorPairsByLargerValues(std::vector<std::pair<int, int> > &pairs, const std::vector<int> &sortedLargerValues) const;
        void                                fillVectorResult(std::vector<int> &result, const std::vector<std::pair<int, int> > &pairs) const;
        std::vector<std::size_t>            getVectorJacobsthalOrder(std::size_t nbToInsert) const;
        void                                insertVectorPendingSmallerElements(std::vector<int> &result, std::vector<std::pair<int, std::size_t> > &pendingSmallerValues, const std::vector<std::size_t> &insertionOrder) const;

        std::deque<std::pair<int, int> >    createDequePairs(const std::deque<int> &container) const;
        void                                fordJohnsonDeque(std::deque<int> &container);
        void                                reorderDequePairsByLargerValues(std::deque<std::pair<int, int> > &pairs, const std::deque<int> &sortedLargerValues) const;
        void                                fillDequeResult(std::deque<int> &result, const std::deque<std::pair<int, int> > &pairs) const;
        std::deque<std::size_t>            getDequeJacobsthalOrder(std::size_t nbToInsert) const;
        void                                insertDequePendingSmallerElements(std::deque<int> &result, std::deque<std::pair<int, std::size_t> > &pendingSmallerValues, const std::deque<std::size_t> &insertionOrder) const;        
};

#endif
