/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:55:53 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/07 13:52:28 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//CONSTRUCTOR/DESTRUCTOR
	Zombie::Zombie( std::string newname ): name(newname)
	{
		std::cout << this->name << " has been created." << std::endl;
	}
	
	Zombie::Zombie(void)
	{
		this->name = "Unknow";
		std::cout <<   "An non-named zombie has been created." << std::endl;
	}
	
	Zombie::~Zombie( void )
	{
		std::cout << this->name << " has been destroyed." << std::endl;
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