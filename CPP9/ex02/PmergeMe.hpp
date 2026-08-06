/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 12:47:35 by arouland          #+#    #+#             */
/*   Updated: 2026/08/06 18:35:44 by arouland         ###   ########.fr       */
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
    private:
        std::vector<int>    _vector;
        std::deque<int>     _deque;

        std::vector<std::pair<int, int> >   createVectorPairs(const std::vector<int> &container) const;
        void                                fordJohnsonVector(std::vector<int> &container);
        std::deque<std::pair<int, int> >    createDequePairs(const std::deque<int> &container) const;
        
};

#endif