/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 19:23:09 by arouland          #+#    #+#             */
/*   Updated: 2026/06/24 12:08:36 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
#include <string>

class Brain
{
	public:
		Brain(void);
		~Brain(void);
		Brain(Brain const &src);
		Brain& operator=(Brain const &rhs);
	private:
		std::string _ideas[100];
};

#endif