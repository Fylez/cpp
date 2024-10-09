/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:58:58 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/07 22:37:47 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//CONSTRUCTOR/DESTRUCTOR

	Brain::Brain(void) {
		std::cout << "Brain Default constructor called" << std::endl;
		for (int i = 0; i < 100; i++) {
			ideas[i] = "idea";
		}
	} 

	Brain::Brain(const Brain &src){
		std::cout << "Brain Copy constructor called" << std::endl;
		*this = src;
	}

	Brain::~Brain(void){
		std::cout << "Brain Destructor called" << std::endl;
	}

//OPERATOR
	Brain &Brain::operator=(const Brain &src){
		std::cout << "Brain Assignment operator called" << std::endl;
		if(this != &src)
		{
			for(int i = 0; i < 100; i++)
				this->ideas[i] = src.get_idea(i);
		}
		return (*this);
	}
//SET AND GET

	std::string Brain::get_idea(unsigned int i) const{
		if(i < 100)
			return(this->ideas[i]);
		else
			return("");
	}

   	void Brain::set_idea(int const i, const std::string &value){
		if(i < 100)
			this->ideas[i] = value;
	}
// CORE FUNCTION


