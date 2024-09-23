/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:15:41 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/23 16:25:01 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	stringSTR;
	std::string	*stringPTR ;

	stringPTR = &stringSTR;

	stringSTR = "HI THIS IS BRAIN";

	std::string	&stringREF = stringSTR;
	std::cout << "L’adresse de la string en mémoire: " << &stringSTR << std::endl;
	std::cout << "L’adresse stockée dans stringPTR: " << stringPTR << std::endl;
	std::cout << "L’adresse stockée dans stringREF: " << &stringREF << std::endl << std::endl;

	std::cout<< "La valeur de la string = " << stringSTR << std::endl;
	std::cout << "La valeur pointée par stringPTR: " << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF: " << stringREF << std::endl;
}