/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:23:48 by arouland          #+#    #+#             */
/*   Updated: 2026/06/23 12:20:42 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);
		Fixed &operator=(Fixed const &rhs);
		Fixed(int const n);
		Fixed(float const z);

		bool operator>(Fixed const &rhs) const;
		bool operator<(Fixed const &rhs) const;
		bool operator>=(Fixed const &rhs) const;
		bool operator<=(Fixed const &rhs) const;
		bool operator==(Fixed const &rhs) const;
		bool operator!=(Fixed const &rhs) const;
		Fixed operator+(Fixed const &rhs) const;
		Fixed operator-(Fixed const &rhs) const;
		Fixed operator*(Fixed const &rhs) const;
		Fixed operator/(Fixed const &rhs) const;
		Fixed &operator++(void); // ++a
		Fixed &operator--(void);
		Fixed operator++(int); // a++
		Fixed operator--(int);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed& min(Fixed &f1, Fixed &f2);
		static const Fixed& min(Fixed const &f1, Fixed const &f2);
		static Fixed& max(Fixed &f1, Fixed &f2);
		static const Fixed& max(Fixed const &f1, Fixed const &f2);
	private:
		int	_value;
		static const int _nbFractBits;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif