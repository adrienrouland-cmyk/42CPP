/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 17:19:08 by arouland          #+#    #+#             */
/*   Updated: 2026/07/19 18:41:14 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{
    
}

RPN::~RPN(void)
{
    
}

RPN::RPN(RPN const &src)
{
    *this = src;
}

RPN& RPN::operator=(RPN const &rhs)
{
    if (this != &rhs)
    {
        this->_stack = rhs._stack;
    }
    return *this;
}

void    RPN::RPNOperations(const std::string &str)
{
    while(!this->_stack.empty())
        this->_stack.pop();
    
    std::stringstream ss(str);
    std::string token;

    if (str.empty() || str.find_first_not_of(" \t") == std::string::npos)
    {
        std::cerr << "Error" << std::endl;
        return ;
    }
    while (ss >> token) 
    {
        if (token.size() == 1 && std::isdigit(static_cast<unsigned char>(token[0]))) // si c'est un chiffre
        {
            this->_stack.push(token[0] - '0');
        }
        else if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            if (this->_stack.size() < 2)
            {
                std::cerr << "Error" << std::endl;
                return ;
            }

            int right = this->_stack.top();
            this->_stack.pop();
            int left = this->_stack.top();
            this->_stack.pop();
            int result = 0;
            if (token == "+")
                result = left + right;
            else if (token == "-")
                result = left - right;
            else if (token == "*")
                result = left * right;
            else if (token == "/")
            {
                if (right == 0) {
                    std::cerr << "Error" << std::endl;
                    return;
                }
                result = left / right;
            }
            this->_stack.push(result);
        }
        else 
        {
            std::cerr << "Error" << std::endl;
            return ;
        }
    }
    if (this->_stack.size() != 1)
    {
        std::cerr << "Error" << std::endl;
        return ;
    }
    std::cout << this->_stack.top() << std::endl;
    
}
