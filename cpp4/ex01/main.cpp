/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:07:40 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/09 00:23:35 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp" // Include your Cat class header
#include "Dog.hpp" // Include your Cat class header

int main() {

	Animal *arrayofanimal[100];

	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			arrayofanimal[i] = new Cat();
		else
			arrayofanimal[i] = new Dog();
	}
	
	Dog *test_dog = new Dog();
	test_dog->set_brain_idea(0, "IDEA TEST");
	Dog copy_test_dog = *test_dog;
	std::cout <<"idea original" << test_dog->get_brain_idea(0) << std::endl;
	std::cout <<"idea copy" << copy_test_dog.get_brain_idea(0) << std::endl;

	delete test_dog;
	std::cout <<"idea copy" << copy_test_dog.get_brain_idea(0) << std::endl;
	
	for (int i = 0; i < 100; i++)
	{
		delete arrayofanimal[i];
	}

}
