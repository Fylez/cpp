/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:59:00 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/08 23:22:39 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

# include "Animal.hpp"
#include "Brain.hpp" 

class Dog : public Animal{

	private:
		Brain *brain;
	public:
		Dog(void);
		Dog(const Dog &src);
		Dog& operator=(const Dog &src);
		virtual ~Dog(void);

		std::string get_brain_idea(unsigned int i) const;
		void set_brain_idea(int const i, const std::string &value);

		virtual void makeSound(void) const;
};

#endif
