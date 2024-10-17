/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:03:14 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/17 13:32:19 by lzaengel         ###   ########.fr       */
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
    Fixed(void);
    Fixed(const Fixed &src);
    Fixed& operator=(const Fixed &src); 
    ~Fixed(void);                            
	
	Fixed(int entier);
	Fixed(float flottant);
	
    int getRawBits(void) const;
    void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;

};

	std::ostream    &operator<<(std::ostream &out, Fixed const &fixed);
#endif
