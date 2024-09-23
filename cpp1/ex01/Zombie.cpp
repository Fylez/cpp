/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:55:53 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/23 16:13:08 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//CONSTRUCTOR/DESTRUCTOR
	Zombie::Zombie( std::string newname ): name(newname)
	{
	}
	
	Zombie::Zombie(void)
	{
		this->name = "Unknow";
	}
	
	Zombie::~Zombie( void )
	{
		std::cout<< "ZOMBIE DETRUIT" << std::endl;
	}

//CORE FUNCTION
	void	Zombie::announce( void ) const
	{
		std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
	}
	
	void	Zombie::changename( std::string newname )
	{
			this->name = newname;
	}