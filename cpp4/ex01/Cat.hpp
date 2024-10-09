/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:59:00 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/08 23:22:44 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

# include "Animal.hpp"
#include "Brain.hpp" 

class Cat : public Animal{
	private:
		Brain *brain;
	public:
		Cat(void);
		Cat(const Cat &src);
		Cat& operator=(const Cat &src);
		virtual ~Cat(void);

		std::string get_brain_idea(unsigned int i) const;
		void set_brain_idea(int const i, const std::string &value);
	
		virtual void makeSound(void) const;
};

#endif
