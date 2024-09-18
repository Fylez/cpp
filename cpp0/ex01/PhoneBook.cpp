/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:21:14 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/18 01:40:47 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


// CONSTRUCTOR & DESTRUCTOR
	PhoneBook::PhoneBook( void )
	{
		PhoneBook::index = 0;
		return;
	}

	PhoneBook::~PhoneBook( void )
	{
		return;
	}

// UTILS

	std::string	PhoneBook::Croptext(std::string data) const
	{
		long unsigned int size;
		
		size = data.size();
		if(size > 10)
		{
			data.resize(10);
			data[9] = '.';
		}
		if(size < 10)
		data.insert(0, (10 - size), ' ');
		return(data);
	}

// CORE FUNCTIONS
	void	PhoneBook::addContact(void)
	{
		std::string input;
		
		std::cout << "---------------------------------------------------------------------" << std::endl;
		if (this->index > 7)
			this->index = 0;
		if(!this->ins_contact[this->index].GetName().empty())
		{
			std::cout << "Contact at index " << this->index << "is gonna be overwritten, are you sure? (Y/N)" << std::endl;
			std::cout << "-----------------------------" << std::endl;
			while (input != "Y" && input != "N")
			{
				std::cin >> input;
				if(input == "Y")
					std::cout << "Overwritting confirmed" << std::endl;
				else if(input == "N")
				{
					std::cout << "Adding new contact canceled" << std::endl;
					return;
				}
				else
					std::cout << "Invalid input, use 'Y' or 'N'" << std::endl;
			}
			std::cout << "-----------------------------" << std::endl;
		}

		while(this->ins_contact[this->index].GetName().empty())
		{
			std::cout << "Enter first name for new contact" << std::endl;
			std::cin >> input;
			this->ins_contact[this->index].SetName(input);
		}
		std::cout << "-----------------------------" << std::endl;
		while(this->ins_contact[this->index].GetLastName().empty())
		{
			std::cout << "Enter Last name for new contact" << std::endl;
			std::cin >> input;
			this->ins_contact[this->index].SetLastName(input);
		}
		std::cout << "-----------------------------" << std::endl;
		while(this->ins_contact[this->index].GetNickname().empty())
		{
			std::cout << "Enter Nick name for new contact" << std::endl;
			std::cin >> input;
			this->ins_contact[this->index].SetNickname(input);
		}
		std::cout << "-----------------------------" << std::endl;
		while(this->ins_contact[this->index].GetPhoneNumber().empty())
		{
			std::cout << "Enter Phone Number for new contact" << std::endl;
			std::cin >> input;
			this->ins_contact[this->index].SetPhoneNumber(input);
		}
		std::cout << "-----------------------------" << std::endl;
		while(this->ins_contact[this->index].GetDarkestSecret().empty())
		{
			std::cout << "Enter Darkest Secrets for new contact" << std::endl;
			std::cin >> input;
			this->ins_contact[this->index].SetDarkestSecret(input);
		}
		std::cout << "-----------------------------" << std::endl;
		this->index++;
		std::cout << "New contact added" << std::endl;
		std::cout << "---------------------------------------------------------------------" << std::endl;
		
	}
	void	PhoneBook::SearchContact(void) const
	{

		int	i = 0;
		if(this->ins_contact[0].GetName().empty())
		{
			std::cout<< "Phonebook is empty" << std::endl;
			return;
		}
		std::cout << "---------------------------------------------" << std::endl;
		std::cout<<"|     Index| FirstName|  LastName|  NickName|" << std::endl;
		while(i < 8 && !this->ins_contact[i].GetName().empty())
		{
			std::cout<<'|' << "         " << i << '|' << Croptext(this->ins_contact[i].GetName()) << '|' << Croptext(this->ins_contact[i].GetLastName()) << '|' << Croptext(this->ins_contact[i].GetNickname()) << '|' << std::endl;
			i++;
		}
		std::cout << "---------------------------------------------" << std::endl;
		std::cout<< std::endl<< "Enter the index of the contact you want to see the details of" << std::endl;
		i = -1;
		while (!(i >= 0) || !(i <= 7))
		{
			std::cin >> i;
			if (i >= 0 && i <= 7 && !this->ins_contact[i].GetName().empty())
			{
				std::cout << "------------" << std::endl;
				std::cout<< "First Name:		" << Croptext(this->ins_contact[i].GetName()) << std::endl << "Last Name:		" << Croptext(this->ins_contact[i].GetLastName()) << std::endl << "Nickname:		" <<Croptext(this->ins_contact[i].GetNickname()) << std::endl<< "Phone Number:		" <<Croptext(this->ins_contact[i].GetPhoneNumber()) << std::endl<< "Darkest Secret:		" <<Croptext(this->ins_contact[i].GetDarkestSecret()) << std::endl;
			}
			else
				std::cout << "Invalid index" << std::endl;
		}
	
		std::cout << "---------------------------------------------------------------------" << std::endl;
	}