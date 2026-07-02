/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 14:47:21 by arouland          #+#    #+#             */
/*   Updated: 2026/07/02 15:21:26 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Base.hpp"
#include "includes/A.hpp"
#include "includes/B.hpp"
#include "includes/C.hpp"

int	main(void)
{	
	Base* random = generate();
	identify(random);

	Base* random2 = generate();
	identify(*random2);

	Base* random3 = generate();
	identify(random3);

	Base* random4 = generate();
	identify(*random4);
	delete random;
	delete random2;
	delete random3;
	delete random4;
}