/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:29:06 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/24 17:25:10 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP

# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
	private:
		std::string Name;
		Weapon	*CarriedWeapon;

	public:
		HumanB (std::string);
		~HumanB (void);
		
		void	attack(void) const;
		void	setWeapon (Weapon &Weapontopick);
	
};

#endif