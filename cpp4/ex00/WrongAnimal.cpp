/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:58:58 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/08 09:41:34 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//CONSTRUCTOR/DESTRUCTOR

	WrongAnimal::WrongAnimal(void): type("WrongAnimal"){
		std::cout << "WrongAnimal default constructor called" << std::endl;
	} 

	WrongAnimal::WrongAnimal(const WrongAnimal &src){
		std::cout << "WrongAnimal copy constructor called" << std::endl;
		*this = src;
	}

	WrongAnimal::~WrongAnimal(void){
		std::cout << "WrongAnimal destructor called" << std::endl;
	}

//OPERATOR
	WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src){
		std::cout << "Assignment operator called" << std::endl;
		if(this != &src)
			this->type = src.get_type();
		return (*this);
	}
//SET AND GET

	std::string WrongAnimal::get_type(void) const{
		return(this->type);
	}

// CORE FUNCTION

	void WrongAnimal::makeSound(void) const{
		std::cout << "wrong ..." << std::endl;
	}


