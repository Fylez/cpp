/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:58:58 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/09 00:26:18 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//CONSTRUCTOR/DESTRUCTOR

	Dog::Dog(void): Animal(){
		this->type = "Dog";
		this->brain = new Brain;
		std::cout << "Dog default constructor called" << std::endl;
	} 

	Dog::Dog(const Dog &src): Animal(src), brain(NULL){
		std::cout << "Dog copy constructor called" << std::endl;
		*this = src;
	}

	Dog::~Dog(void){
		std::cout << "Dog destructor called" << std::endl;
		delete this->brain;
	}

//OPERATOR
	Dog &Dog::operator=(const Dog &src){
		std::cout << "Dog Assignment operator called" << std::endl;
		if(this != &src)
		{
			if(this->brain)
			{
				delete this->brain;
			}
			this->type = src.get_type();
			this->brain = new Brain(*src.brain);
		}
		return (*this);
	}
//SET AND GET
	std::string Dog::get_brain_idea(unsigned int i) const{
		if(i < 100)
			return(this->brain->get_idea(i));
		else
			return("");
	}

   	void Dog::set_brain_idea(int const i, const std::string &value){
		if(i < 100)
			this->brain->set_idea(i, value);
	}
// CORE FUNCTION

	void Dog::makeSound(void) const{
		std::cout << "ouaf" << std::endl;
	}


