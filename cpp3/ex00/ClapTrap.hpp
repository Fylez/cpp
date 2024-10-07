/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:59:00 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/07 22:37:23 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap{

	private:
		std::string name;
		int	hitpoints;
		int energypoints;
		int attackdamage;
		
	public:
		ClapTrap(void);
		ClapTrap(std::string newName);
		ClapTrap(const ClapTrap &src);
		ClapTrap& operator=(const ClapTrap &other);
		~ClapTrap(void);
	
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string get_name(void) const;
		void set_name(std::string const value);
		int get_hitpoints(void) const;
   		void set_hitpoints(int const value);
		int get_energypoints(void) const;
   		void set_energypoints(int const value);
		int get_attackdamage(void) const;
   		void set_attackdamange(int const value);
};

#endif