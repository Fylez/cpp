/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:33:47 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/07 23:17:58 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

class FragTrap : public ClapTrap{
	public:
		FragTrap(void);
		FragTrap(std::string newName);
		FragTrap(const FragTrap &src);
		FragTrap& operator=(const FragTrap &src);
		~FragTrap(void);
	
		void attack(const std::string& target);
   		void highFivesGuys();
};

#endif