/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:59:00 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/09 00:36:07 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

# include <iostream>

class Animal{

	protected:
		std::string type;

		
	public:
		Animal(void);
		Animal(const Animal &src);
		Animal& operator=(const Animal &src);
		virtual ~Animal(void);
	
		std::string get_type(void) const;

		virtual void makeSound(void) const = 0;
};

#endif
