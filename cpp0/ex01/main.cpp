/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:24:36 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/18 01:21:01 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook ins_phonebook;
	std::string		cmd;
	std::cout << "Phonebook: use ADD to add a new contact, SEARCH to display a contact information and EXIT to exit the phonebook" << std::endl;
	while(cmd != "EXIT" && !std::cin.eof())
	{
		std::getline(std::cin, cmd);
		if(cmd == "ADD")
			ins_phonebook.addContact();
		else if(cmd == "SEARCH")
			ins_phonebook.SearchContact();
		else if (cmd != "EXIT" && !cmd.empty())
			std::cout << "Invalid Command, use ADD, SEARCH or EXIT" << std::endl;
	}
	
	return (0);
}