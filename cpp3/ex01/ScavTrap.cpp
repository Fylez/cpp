/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:58:58 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/07 23:20:07 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//CONSTRUCTOR/DESTRUCTOR

	ScavTrap::ScavTrap(void): ClapTrap(){
		this->hitpoints = 100;
		this->energypoints = 50;
		this->attackdamage = 20;
		std::cout << "ScavTrap with the default name " << this->name << " have been created" << std::endl;
	}

	ScavTrap::ScavTrap(std::string newName): ClapTrap(newName){
		this->hitpoints = 100;
		this->energypoints = 50;
		this->attackdamage = 20;
		std::cout << "ScavTrap with the name " << this->name << " have been created" << std::endl;
	} 

	ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap(src){
		std::cout << "ScavTrap Copy constructor called" << std::endl;
		*this = src;
	}

	ScavTrap::~ScavTrap(void){
		std::cout << "ScavTrap named " << this->name << " have been destroyed" << std::endl;
	}

//OPERATOR
	ScavTrap &ScavTrap::operator=(const ScavTrap &src){
		std::cout << "ScavTrap Assignment operator called" << std::endl;
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

	void ScavTrap::attack(const std::string& target){
		if(this->energypoints > 0 && this->hitpoints > 0){
			this->energypoints--;
			std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << attackdamage << " points of damage!" << std::endl;
		}
		else{
			if(this->hitpoints <= 0)
				std::cout << "ScavTrap " << this->name << " is dead!" << std::endl;
			else if(this->energypoints <= 0)
				std::cout << "ScavTrap " << this->name << " dont have energy points left!" << std::endl;		
		}	
	}

	void ScavTrap::guardGate(void) {
    if(this->hitpoints > 0){
			this->energypoints--;
			std::cout << "ScavTrap " << this->name << " switched to gate keeper mode!" << std::endl;
		}
		else if(this->hitpoints <= 0)
				std::cout << "ScavTrap " << this->name << " is dead!" << std::endl;		
	}

