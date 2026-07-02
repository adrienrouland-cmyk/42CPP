/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 12:37:33 by arouland          #+#    #+#             */
/*   Updated: 2026/07/02 12:55:19 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data* data = new Data;
	data->data = 42;

	std::cout << "initial address :" << data << std::endl;
	uintptr_t ptr = Serializer::serialize(data);
	std::cout << "serialize address :" << ptr << std::endl;
	Data* newdata = Serializer::deserialize(ptr);
	std::cout << "deserialized address :" << newdata << std::endl;
	std::cout << "deserialized value : " << newdata->data << std::endl;
	delete data;
}