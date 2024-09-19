/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:23:52 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/19 20:51:40 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include <iostream>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		int index;
		Contact ins_contact[8];

		std::string	Croptext(std::string data) const;
		
	public:
		PhoneBook (void);
		~PhoneBook (void);
	
		void	addContact(void);
		void	SearchContact(void) const;
		
};

#endif
