/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:07:40 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/09 00:38:44 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp" // Include your Cat class header
#include "Dog.hpp" // Include your Cat class header

int main() {
    // const Animal* defaultanimal = new Animal();
	// std::cout << defaultanimal->get_type() << std::endl;
	// defaultanimal->makeSound();
	// delete defaultanimal;

	const Animal* cat = new Cat();
    const Animal* dog = new Dog();
    std::cout << dog->get_type()<< std::endl;
    std::cout << cat->get_type() << std::endl;
	
    cat->makeSound();
    dog->makeSound();
   


    delete dog;
    delete cat;

    return 0;
}
