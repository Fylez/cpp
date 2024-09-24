/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:36:10 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/24 17:25:40 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//CONSTRUCTOR/DESTRUCTOR

	HumanB::HumanB(std::string newName): Name(newName), CarriedWeapon(NULL)
	{	
	}
	
	HumanB::~HumanB( void )
	{

	}

//CORE FUNCTION
	void	HumanB::attack (void) const
	{
		if (this->CarriedWeapon)
			std::cout << this->Name << " attack with their " << this->CarriedWeapon->getType() << std::endl;
		else
			std::cout << this->Name << " attack with no Weapon " << std::endl;
	}
	
	void	HumanB::setWeapon(Weapon &Weapontopick)
	{
		this->CarriedWeapon = &Weapontopick;
	}