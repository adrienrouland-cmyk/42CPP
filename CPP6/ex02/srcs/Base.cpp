/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 13:02:26 by arouland          #+#    #+#             */
/*   Updated: 2026/07/02 15:20:56 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

Base::~Base(void)
{

}

Base* generate(void)
{
	static bool is_seed = false;

	if (is_seed == false)
	{
		std::srand(std::time(NULL));
		is_seed = true;
	}
	int rand = std::rand();

	if (rand % 3 == 0)
	{
		std::cout << "Creates A" << std::endl;
		return new A();
	}
	else if (rand % 3 == 1)
	{
		std::cout << "Creates B" << std::endl;
		return new B();
	}
	else if (rand % 3 == 2)
	{
		std::cout << "Creates C" << std::endl;
		return new C();
	}
	else
		return NULL;
}

void	identify(Base *p)
{
	A* testA = dynamic_cast<A*>(p);
	if (testA)
	{
		std::cout << "Type is : A" << std::endl;
		return ;
	}
	B* testB = dynamic_cast<B*>(p);
	if (testB)
	{
		std::cout << "Type is : B" << std::endl;
		return ;
	}
	C* testC = dynamic_cast<C*>(p);
	if (testC)
	{
		std::cout << "Type is : C" << std::endl;
		return ;
	}
}

void	identify(Base& p)
{
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "Type is : A" << std::endl;
		(void)a;
		return ;
	}
	catch (std::exception &e) {
		(void)e;
	}
	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "Type is : B" << std::endl;
		(void)b;
		return ;
	}
	catch (std::exception &e) {
		(void)e;
	}
	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "Type is : C" << std::endl;
		(void)c;
		return ;
	}
	catch (std::exception &e) {
		(void)e;
	}
}