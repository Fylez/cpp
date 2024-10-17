/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:02:58 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/13 13:02:51 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Prototype
	Zombie* newZombie( std::string name );
	void randomChump( std::string name );

//Function
	int	main()
	{
		Zombie *pzombie;
		
		pzombie = newZombie("Ludovic");
		randomChump("Nathan");
		pzombie->announce();
		delete pzombie;
		
		return(1);
	}
