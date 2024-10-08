/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:58:58 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/08 10:00:13 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//CONSTRUCTOR/DESTRUCTOR

	Cat::Cat(void): Animal(){
		this->type = "Cat";
		std::cout << "Cat default constructor called" << std::endl;
	} 

	Cat::Cat(const Cat &src): Animal(src){
		std::cout << "Cat copy constructor called" << std::endl;
		*this = src;
	}

	Cat::~Cat(void){
		std::cout << "Cat destructor called" << std::endl;
	}

//OPERATOR
	Cat &Cat::operator=(const Cat &src){
		std::cout << "Cat Assignment operator called" << std::endl;
		if(this != &src)
			this->type = src.get_type();
		return (*this);
	}
//SET AND GET

// CORE FUNCTION

	void Cat::makeSound(void) const{
		std::cout << "meowww" << std::endl;
	}


