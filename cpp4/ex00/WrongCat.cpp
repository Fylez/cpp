/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:58:58 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/08 10:05:18 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//CONSTRUCTOR/DESTRUCTOR

	WrongCat::WrongCat(void): WrongAnimal(){
		this->type = "WrongCat";
		std::cout << "WrongCat default constructor called" << std::endl;
	} 

	WrongCat::WrongCat(const WrongCat &src): WrongAnimal(src){
		std::cout << "WrongCat copy constructor called" << std::endl;
		*this = src;
	}

	WrongCat::~WrongCat(void){
		std::cout << "WrongCat destructor called" << std::endl;
	}

//OPERATOR
	WrongCat &WrongCat::operator=(const WrongCat &src){
		std::cout << "WrongCat Assignment operator called" << std::endl;
		if(this != &src)
			this->type = src.get_type();
		return (*this);
	}
//SET AND GET

// CORE FUNCTION

	void WrongCat::makeSound(void) const{
		std::cout << "wrong meowww" << std::endl;
	}


