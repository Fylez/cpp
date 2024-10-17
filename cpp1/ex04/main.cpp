/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:57:54 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/13 13:04:28 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <fstream>
#include <iostream>

int	main(int argc, char **argv)
{

	std::string oldstr = argv[2];
	std::string newstr = argv[3];
	std::string	linetocopy;
	size_t			pos = 0;
	size_t			found;
	

	// Argument Check
		if(argc != 4 || oldstr.empty() || newstr.empty()){
			std::cerr << "Wrong arguments, correct arguments: [file] [stringtoreplace] [stringtoreplacewith]" << std::endl;
			return 1;
		}

	//Opening Files
		std::ifstream inputf(argv[1]);
		if (!inputf){
			std::cerr << "Error when trying to open file passed as argument" << std::endl;
			return 1;
		}
		
		std::ofstream outputf((std::string(argv[1]) + ".replace").c_str());
		if(!outputf){
			std::cerr << "Error when trying to create output file" << std::endl;
			return 1;
		}
	
	//Copying and replacing to new file

		while(std::getline(inputf, linetocopy)) {
			pos = 0;
			while((found = linetocopy.find(oldstr, pos)) != std::string::npos) {
				while(pos != found)
					outputf.put(linetocopy[pos++]);
				outputf << newstr;
				pos = pos + oldstr.length();
			}
		while(pos < linetocopy.length())
    		outputf.put(linetocopy[pos++]);
		outputf << std::endl;
		}
		inputf.close();
		outputf.close();
}
