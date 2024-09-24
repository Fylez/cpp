/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:29:06 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/24 17:15:16 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP

# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string Name;
		Weapon	&CarriedWeapon;

	public:
		HumanA (std::string, Weapon &Weapontopick);
		~HumanA (void);
		
		void	attack(void) const;
		void	setWeapon (Weapon &Weapontopick);
	
};

#endif