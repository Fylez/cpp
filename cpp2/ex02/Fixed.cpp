/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:17:19 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/30 19:41:22 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//CONSTRUCTOR/DESTRUCTOR

	Fixed::Fixed(void): value(0){
		std::cout << "Default constructor called" << std::endl;
	}
	
	Fixed::Fixed(const Fixed &src){
		std::cout << "Default constructor called" << std::endl;
		*this = src;
	}
	
	Fixed &Fixed::operator=(const Fixed &src){
		std::cout << "Copy assignment operator called" << std::endl;
		if(this != &src)
			this->value = src.getRawBits();
		return (*this);
	}
	
	Fixed::~Fixed( void ){
		std::cout << "Destructor called" << std::endl;
	}


	Fixed::Fixed(int entier){
		std::cout<< "Int constructor called" << std::endl;
		this->value = entier << nbrofbits;
	}

	Fixed::Fixed(float flottant){
		std::cout<< "Float constructor called" << std::endl;
		this->value = roundf(flottant * (1 << nbrofbits));
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

	float Fixed::toFloat( void ) const{
		return ((float)value / (1 << nbrofbits));
	}

	int Fixed::toInt( void ) const{
		return (value >> nbrofbits);
	}

    std::ostream& operator<<(std::ostream &out, const Fixed &fixed){
        out << fixed.toFloat();
        return (out);
    }

	Fixed& Fixed::min(Fixed &fixednumber1, Fixed &fixednumber2){
    	return ((fixednumber1< fixednumber2) ? fixednumber1: fixednumber2);
	}

	const Fixed& Fixed::min(const Fixed &fixednumber1, const Fixed &fixednumber2){
		return ((fixednumber1< fixednumber2) ? fixednumber1: fixednumber2);
	}

	Fixed& Fixed::max(Fixed &fixednumber1, Fixed &fixednumber2){
		return ((fixednumber1> fixednumber2) ? fixednumber1: fixednumber2);
	}

	const Fixed& Fixed::max(const Fixed &fixednumber1, const Fixed &fixednumber2){
		return ((fixednumber1> fixednumber2) ? fixednumber1: fixednumber2);
	}


// OPERATEUR DE COMPARAISON

	bool Fixed::operator>(const Fixed &other) const{
		return (value > other.getRawBits());
	}

	bool Fixed::operator<(const Fixed &other) const{
		return (value < other.getRawBits());
	}

	bool Fixed::operator>=(const Fixed &other) const{
		return (value >= other.getRawBits());
	}

	bool Fixed::operator<=(const Fixed &other) const{
		return (value <= other.getRawBits());
	}

	bool Fixed::operator==(const Fixed &other) const{
		return (value == other.getRawBits());
	}

	bool Fixed::operator!=(const Fixed &other) const{
		return (value != other.getRawBits());
	}

// OPERATEUR ARITHMETIQUE

	Fixed Fixed::operator+(const Fixed &other) const{
		return (Fixed(this->toFloat() + other.toFloat()));
	}

	Fixed Fixed::operator-(const Fixed &other) const{
		return (Fixed(this->toFloat() - other.toFloat()));
	}

	Fixed Fixed::operator*(const Fixed &other) const{
		return (Fixed(this->toFloat() * other.toFloat()));
	}

	Fixed Fixed::operator/(const Fixed &other) const{
		return (Fixed(this->toFloat() / other.toFloat()));
	}

// OPERATEUR INCREMENTATION

	Fixed& Fixed::operator++(){
		++value;
		return (*this);
	}

	Fixed Fixed::operator++(int) {
		Fixed temp = *this;
		value++;
		return (temp);
	}

	Fixed& Fixed::operator--(){
		--value;
		return (*this);
	}

	Fixed Fixed::operator--(int){
		Fixed temp = *this;
		value--;
		return (temp);
	}