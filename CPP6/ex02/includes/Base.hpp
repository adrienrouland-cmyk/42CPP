/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 12:59:58 by arouland          #+#    #+#             */
/*   Updated: 2026/07/02 15:20:39 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

#include <cstdlib>
#include <ctime>

class Base
{
	public:
		virtual ~Base(void);
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);	

#endif