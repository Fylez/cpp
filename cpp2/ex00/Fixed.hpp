/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:03:14 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/27 18:33:15 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int value;
    static const int nbrofbits = 8;

public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed& operator=(const Fixed &other); 
    ~Fixed();                            

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif