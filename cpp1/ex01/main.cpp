/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:44:24 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/23 16:14:17 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name );


int	main()
{

	int i = 0;
	int s = 5;

	Zombie *horde = zombieHorde(s, "Bruh");
	
	while(i < s)
	{
		horde[i].announce();
		i++;
	}
	
	delete [] horde;
	return 0;
}