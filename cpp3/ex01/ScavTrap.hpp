/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:33:47 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/07 23:05:31 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

class ScavTrap : public ClapTrap{
	public:
		ScavTrap(void);
		ScavTrap(std::string newName);
		ScavTrap(const ScavTrap &src);
		ScavTrap& operator=(const ScavTrap &src);
		~ScavTrap(void);
	
		void attack(const std::string& target);
   		void guardGate(void);
};

#endif