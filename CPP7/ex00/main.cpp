/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 18:44:48 by arouland          #+#    #+#             */
/*   Updated: 2026/07/02 20:10:26 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

struct Data
{
	int _data;
	bool operator<(const Data& rhs) const { return this->_data < rhs._data; }
	bool operator>(const Data& rhs) const { return this->_data > rhs._data; }
};

std::ostream & operator<<(std::ostream & o, const Data & rhs) {
o << rhs._data;
return o;
}

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	Data data;
	data._data = 42;
	Data data2;
	data2._data = 21;
	std::cout << "data = " << data._data << std::endl;
	std::cout << "data2 = " << data2._data << std::endl;
	::swap(data, data2);
	std::cout << "data = " << data._data << std::endl;
	std::cout << "data2 = " << data2._data << std::endl;
	std::cout << "min( data, data2 ) = " << ::min( data, data2 ) << std::endl;
	std::cout << "max( data, data2 ) = " << ::max( data, data2 ) << std::endl;
	
	return 0;
}