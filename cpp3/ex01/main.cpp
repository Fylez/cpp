/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:16:04 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/07 23:13:45 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap defaultClapTrap;
    defaultClapTrap.attack("Target");

    ClapTrap clapTrap1("A");
    ClapTrap clapTrap2("B");

    clapTrap1.attack("B");
    clapTrap2.takeDamage(5);
    clapTrap2.beRepaired(3);

    for (int i = 0; i < 10; ++i) {
        clapTrap1.attack("B");
    }

    clapTrap1.attack("B");
    clapTrap1.beRepaired(5);

    ClapTrap clapTrap3 = clapTrap1;
    clapTrap3.attack("B");

	ScavTrap defautlScavTrap;
    ScavTrap scavTrap1("SA");
	ScavTrap scavTrap2("SB");
    defaultClapTrap.attack("SB");
    scavTrap2.takeDamage(20);
    scavTrap2.beRepaired(10);
    scavTrap2.guardGate();

    scavTrap1.takeDamage(100);

    ScavTrap scavTrap3 = scavTrap1;
    scavTrap3.attack("ClapTrap C");
	scavTrap3.attack("ClapTrap C");
	scavTrap3.attack("ClapTrap C");
    scavTrap3.guardGate();
    return 0;
}