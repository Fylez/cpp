/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:58:58 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/07 23:20:13 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//CONSTRUCTOR/DESTRUCTOR

	FragTrap::FragTrap(void): ClapTrap(){
		this->hitpoints = 100;
		this->energypoints = 100;
		this->attackdamage = 30;
		std::cout << "FragTrap with the default name " << this->name << " have been created" << std::endl;
	}

	FragTrap::FragTrap(std::string newName): ClapTrap(newName){
		this->hitpoints = 100;
		this->energypoints = 100;
		this->attackdamage = 30;
		std::cout << "FragTrap with the name " << this->name << " have been created" << std::endl;
	} 

	FragTrap::FragTrap(const FragTrap &src): ClapTrap(src){
		std::cout << "FragTrap Copy constructor called" << std::endl;
		*this = src;
	}

	FragTrap::~FragTrap(void){
		std::cout << "FragTrap named " << this->name << " have been destroyed" << std::endl;
	}

//OPERATOR
	FragTrap &FragTrap::operator=(const FragTrap &src){
		std::cout << "FragTrap Assignment operator called" << std::endl;
		if(this != &src)
		{
			this->name = src.get_name();
			this->hitpoints = src.get_hitpoints();
			this->energypoints = src.get_energypoints();
			this->attackdamage = src.get_attackdamage();
		}
		return (*this);
	}
//SET AND GET

// CORE FUNCTION

	void FragTrap::attack(const std::string& target){
		if(this->energypoints > 0 && this->hitpoints > 0){
			this->energypoints--;
			std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << attackdamage << " points of damage!" << std::endl;
		}
		else{
			if(this->hitpoints <= 0)
				std::cout << "FragTrap " << this->name << " is dead!" << std::endl;
			else if(this->energypoints <= 0)
				std::cout << "FragTrap " << this->name << " dont have energy points left!" << std::endl;		
		}	
	}

	void FragTrap::highFivesGuys(void) {
    if(this->hitpoints > 0){
			this->energypoints--;
			std::cout << "FragTrap " << this->name << "is asking for a high fives!" << std::endl;
		}
		else if(this->hitpoints <= 0)
				std::cout << "FragTrap " << this->name << " is dead!" << std::endl;		
	}

