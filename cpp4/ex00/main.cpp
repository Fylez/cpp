/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:07:40 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/08 10:15:44 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* defaultanimal = new Animal();
	const Animal* cat = new Cat();
    const Animal* dog = new Dog();

    std::cout << dog->get_type()<< std::endl;
    std::cout << cat->get_type() << std::endl;
	std::cout << defaultanimal->get_type() << std::endl;
    cat->makeSound();
    dog->makeSound();
    defaultanimal->makeSound();

    delete defaultanimal;
    delete dog;
    delete cat;

    const WrongAnimal* wrongDefaultAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->get_type() << std::endl;
	std::cout << wrongDefaultAnimal->get_type() << std::endl;
    wrongCat->makeSound();
    wrongDefaultAnimal->makeSound();

    delete wrongDefaultAnimal;
    delete wrongCat;

    return 0;
}