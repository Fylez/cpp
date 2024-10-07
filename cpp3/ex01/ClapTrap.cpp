/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:58:58 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/07 21:49:19 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//CONSTRUCTOR/DESTRUCTOR

	ClapTrap::ClapTrap(void): name("JaneDoe"), hitpoints(10), energypoints(10), attackdamage(0){
		std::cout << "new ClapTrap with the default name " << this->name << " have been created" << std::endl;
	} 

	ClapTrap::ClapTrap(std::string newName): name(newName), hitpoints(10), energypoints(10), attackdamage(0){
		std::cout << "new ClapTrap named " << this->name << " have been created" << std::endl;
	} 

	ClapTrap::ClapTrap(const ClapTrap &src){
		std::cout << "Copy constructor called" << std::endl;
		*this = src;
	}

	ClapTrap::~ClapTrap(void){
		std::cout << "ClapTrap named " << this->name << " have been destroyed" << std::endl;
	}

//OPERATOR
	ClapTrap &ClapTrap::operator=(const ClapTrap &src){
		std::cout << "Assignment operator called" << std::endl;
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
		
	std::string ClapTrap::get_name(void) const{
		return(this->name);
	}

	void ClapTrap::set_name(std::string const value){
		this->name = value;
	}

	int ClapTrap::get_hitpoints(void) const{
		return(this->hitpoints);
	}

   	void ClapTrap::set_hitpoints(int const value){
		this->hitpoints = value;
	}

	int ClapTrap::get_energypoints(void) const{
		return(this->energypoints);
	}

   	void ClapTrap::set_energypoints(int const value){
		this->energypoints = value;
	}

	int ClapTrap::get_attackdamage(void) const{
		return(this->attackdamage);
	}

   	void ClapTrap::set_attackdamange(int const value){
		this->attackdamage = value;
	}

// PUBLIC FUNCTION

	void ClapTrap::attack(const std::string& target){
		if(this->energypoints > 0 && this->hitpoints > 0){
			this->energypoints--;
			std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << attackdamage << " points of damage!" << std::endl;
		}
		else{
			if(this->hitpoints <= 0)
				std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
			else if(this->energypoints <= 0)
				std::cout << "ClapTrap " << this->name << " dont have energy points left!" << std::endl;		
		}	
	}

	void ClapTrap::takeDamage(unsigned int amount){
		if(this->hitpoints > 0){
			std::cout << "ClapTrap " << this->name << " have lost " << amount << " hit points " << std::endl;
			this->hitpoints = this->hitpoints - amount;
			if(hitpoints <= 0){
				hitpoints = 0;
				std::cout << "ClapTrap " << this->name << " just died!" << std::endl;
			}
		}
		else
			std::cout << "ClapTrap " << this->name << " is arleady dead!" << std::endl;
			
		
	}

	void ClapTrap::beRepaired(unsigned int amount){
		if(this->energypoints > 0 && this->hitpoints > 0){
			std::cout << "ClapTrap " << this->name << " repaired itself, gaining " << amount << " hit points " << std::endl;
			this->hitpoints = this->hitpoints + amount;
		}
		else{
			if(this->hitpoints <= 0)
				std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
			else if(this->energypoints <= 0)
				std::cout << "ClapTrap " << this->name << " dont have energy points left!" << std::endl;		
		}	
	}
