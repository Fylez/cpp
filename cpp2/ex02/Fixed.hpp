/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:03:14 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/30 19:28:55 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
    int value;
    static const int nbrofbits = 8;

public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed& operator=(const Fixed &other); 
    ~Fixed();                            
	
	Fixed(int entier);
	Fixed(float flottant);
	
    int getRawBits(void) const;
    void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;


	bool operator>(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;

	Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;
	
	Fixed& operator++();  
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int); 

	static Fixed& min(Fixed &fixednumber1, Fixed &fixednumber2);
    static const Fixed& min(const Fixed &fixednumber1,const Fixed &fixednumber2);
    static Fixed& max(Fixed &fixednumber1, Fixed &fixednumber2);
    static const Fixed& max(const Fixed &fixednumber1,const Fixed &fixednumber2);
	

};

	std::ostream    &operator<<(std::ostream &out, Fixed const &fixed);
#endif