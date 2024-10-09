/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:58:58 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/08 09:41:34 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//CONSTRUCTOR/DESTRUCTOR

	Animal::Animal(void): type("Animal"){
		std::cout << "Animal default constructor called" << std::endl;
	} 

	Animal::Animal(const Animal &src){
		std::cout << "Animal copy constructor called" << std::endl;
		*this = src;
	}

	Animal::~Animal(void){
		std::cout << "Animal destructor called" << std::endl;
	}

//OPERATOR
	Animal &Animal::operator=(const Animal &src){
		std::cout << "Assignment operator called" << std::endl;
		if(this != &src)
			this->type = src.get_type();
		return (*this);
	}
//SET AND GET

	std::string Animal::get_type(void) const{
		return(this->type);
	}

// CORE FUNCTION

	void Animal::makeSound(void) const{
		std::cout << "..." << std::endl;
	}


