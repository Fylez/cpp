/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:11:01 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/13 16:20:09 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (argv[i])
	{
		while (argv[i][j])
		{
			std::cout << (char)std::toupper(argv[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	std::cout << std::endl;
	return (1);
}