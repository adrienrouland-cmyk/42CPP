/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 19:43:12 by arouland          #+#    #+#             */
/*   Updated: 2026/06/04 20:14:06 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		std::string FirstName;
		std::string LastName;
		std::string PhoneNumber;
		std::string DarkestSecret;
};

#endif