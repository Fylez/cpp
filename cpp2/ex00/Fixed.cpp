/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:17:19 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/17 13:31:37 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//CONSTRUCTOR/DESTRUCTOR

	Fixed::Fixed(void): value(0){
		std::cout << "Default constructor called" << std::endl;
	}
	
	Fixed::Fixed(const Fixed &src){
		std::cout << "Copy constructor called" << std::endl;
		*this = src;
	}
	
	Fixed &Fixed::operator=(const Fixed &src){
		std::cout << "assignment operator called" << std::endl;
		if(this != &src)
			this->value = src.getRawBits();
		return (*this);
	}
	
	Fixed::~Fixed( void ){
		std::cout << "Destructor called" << std::endl;
	}

// CORE FUNCTION

	int	Fixed::getRawBits(void) const{
		std::cout << "getRawBits member function called" << std::endl;
		return (this->value);
	}

	void Fixed::setRawBits(int const raw){
		std::cout << "setRawBits member function called" << std::endl;
		this->value = raw;
	}
