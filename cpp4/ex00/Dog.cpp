/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:58:58 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/08 10:02:26 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//CONSTRUCTOR/DESTRUCTOR

	Dog::Dog(void): Animal(){
		this->type = "Dog";
		std::cout << "Dog default constructor called" << std::endl;
	} 

	Dog::Dog(const Dog &src): Animal(src){
		std::cout << "Dog copy constructor called" << std::endl;
		*this = src;
	}

	Dog::~Dog(void){
		std::cout << "Dog destructor called" << std::endl;
	}

//OPERATOR
	Dog &Dog::operator=(const Dog &src){
		std::cout << "Dog Assignment operator called" << std::endl;
		if(this != &src)
			this->type = src.get_type();
		return (*this);
	}
//SET AND GET

// CORE FUNCTION

	void Dog::makeSound(void) const{
		std::cout << "ouaf" << std::endl;
	}


