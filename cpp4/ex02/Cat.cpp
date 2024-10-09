/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:58:58 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/09 00:22:18 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//CONSTRUCTOR/DESTRUCTOR

	Cat::Cat(void): Animal(){
		this->type = "Cat";
		this->brain = new Brain;
		std::cout << "Cat default constructor called" << std::endl;
	} 

	Cat::Cat(const Cat &src): Animal(src), brain(NULL){
		std::cout << "Cat copy constructor called" << std::endl;
		*this = src;
	}

	Cat::~Cat(void){
		std::cout << "Cat destructor called" << std::endl;
		delete this->brain;
	}

//OPERATOR
	Cat &Cat::operator=(const Cat &src){
		std::cout << "Cat Assignment operator called" << std::endl;
		if(this != &src)
		{
			if(this->brain)
				delete this->brain;
			this->type = src.get_type();
			this->brain = new Brain(*src.brain);
		}
		return (*this);
	}
//SET AND GET
	std::string Cat::get_brain_idea(unsigned int i) const{
		if(i < 100)
			return(this->brain->get_idea(i));
		else
			return("");
	}

   	void Cat::set_brain_idea(int const i, const std::string &value){
		if(i < 100)
			this->brain->set_idea(i, value);
	}
// CORE FUNCTION

	void Cat::makeSound(void) const{
		std::cout << "meowww" << std::endl;
	}


