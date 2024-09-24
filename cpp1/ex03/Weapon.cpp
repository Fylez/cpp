/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:24:48 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/24 17:45:14 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//CONSTRUCTOR/DESTRUCTOR

	Weapon::Weapon(std::string newtype)
	{
		this->type = newtype;
	}
	
	Weapon::~Weapon( void )
	{

	}

//CORE FUNCTION
	std::string& Weapon::getType (void)
	{
		return (this->type);
	}
	
	void		Weapon::setType(std::string newType)
	{	
		this->type = newType;
	}
