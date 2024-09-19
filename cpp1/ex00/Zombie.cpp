/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:55:53 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/19 09:23:50 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//CONSTRUCTOR/DESTRUCTOR
	Zombie::Zombie( std::string newname )
	{
		this->name = newname;
	}

	Zombie::~Zombie( void )
	{

	}

//CORE FUNCTION
	void	Zombie::announce( void )
	{
		std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
	}