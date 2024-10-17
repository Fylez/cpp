/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:12:07 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/13 13:04:45 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//CONSTRUCTOR/DESTRUCTOR

	Harl::Harl(void)
	{
	}
	
	Harl::~Harl( void )
	{
	}

//CORE FUNCTION

	void Harl::debug( void )
	{
		std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
	}

	void Harl::info( void )
	{
		std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;

	}
	void Harl::warning( void )
	{
		std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	}

	void Harl::error( void )
	{
		std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	}

	void Harl::complain( std::string level )
	{
		void (Harl::*functions[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
		std::string strings[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

		for(int i = 0; i < 4; i++) {
			if(strings[i] == level) {
				(this->*functions[i])();
				return;
			}
		}
		std::cout << "I dont understand what you want me to do" << std::endl;
	}
