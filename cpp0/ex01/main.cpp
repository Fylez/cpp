/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:24:36 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/19 20:02:27 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook ins_phonebook;
	std::string		cmd;
	std::cout << "Phonebook: use ADD to add a new contact, SEARCH to display a contact information and EXIT to exit the phonebook" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	while(cmd != "EXIT" && !std::cin.eof())
	{
		std::getline(std::cin, cmd);
		if(cmd == "ADD")
			ins_phonebook.addContact();
		else if(cmd == "SEARCH")
			ins_phonebook.SearchContact();
	}
	std::cout << "Phonebook: Goodbye!" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	return (0);
}
