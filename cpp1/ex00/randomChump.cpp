/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:03:41 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/13 13:03:15 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//FUNCTION
	void randomChump( std::string name )
	{
		Zombie newZombie(name);
		newZombie.announce();
	}
