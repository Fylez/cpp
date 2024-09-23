/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:55:53 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/23 16:09:59 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//CONSTRUCTOR/DESTRUCTOR


	Zombie::Zombie( std::string newname ): name(newname)
	{
	}

	Zombie::Zombie(void)
	{	
	}
	
	Zombie::~Zombie( void )
	{

	}

//CORE FUNCTION
	void	Zombie::announce( void ) const
	{
		std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
	}
	
