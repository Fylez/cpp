/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:36:10 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/13 13:03:58 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//CONSTRUCTOR/DESTRUCTOR

	HumanA::HumanA(std::string newName, Weapon &Weapontopick) : Name(newName), CarriedWeapon(Weapontopick)
	{	
	}
	
	HumanA::~HumanA( void )
	{

	}

//CORE FUNCTION
	void	HumanA::attack (void) const
	{
		std::cout << this->Name << " attack with their " << this->CarriedWeapon.getType() << std::endl;;
	}
	
	void	HumanA::setWeapon(Weapon &Weapontopick)
	{
		this->CarriedWeapon = Weapontopick;
	}
