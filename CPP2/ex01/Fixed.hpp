/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:23:48 by arouland          #+#    #+#             */
/*   Updated: 2026/06/16 19:28:28 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);
		Fixed &operator=(Fixed const &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int	_nb;
		static const int _nbFractBits;
};

#endif