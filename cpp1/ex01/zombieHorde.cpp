/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:38:00 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/13 13:03:43 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int		i = 0;
	Zombie *Zombie_Horde = new Zombie[N];
	while(i < N)
	{
		Zombie_Horde[i].changename(name);
		i++;
	}
	
	return (Zombie_Horde);
	
}
