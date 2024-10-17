/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:22:31 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/13 13:04:23 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	private:
		std::string type;

	public:
		Weapon (std::string);
		~Weapon (void);
		
		const std::string	&getType (void);
		void	setType (std::string);
	
};

#endif
