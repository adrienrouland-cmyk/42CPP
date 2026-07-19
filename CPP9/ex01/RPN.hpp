/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 17:03:01 by arouland          #+#    #+#             */
/*   Updated: 2026/07/19 18:20:47 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <stack>
#include <string>
#include <sstream>
#include <iostream>

class RPN {
    public:
        RPN(void);
        ~RPN(void);
        RPN(RPN const &src);
        RPN& operator=(RPN const &rhs);

        void RPNOperations(const std::string &str);
    
    private:
        std::stack<int> _stack;
};

#endif