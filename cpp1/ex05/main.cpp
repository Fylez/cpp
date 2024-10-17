/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:53:18 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/13 13:04:51 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl instance;

    instance.complain("DEBUG");
    instance.complain("INFO");
	instance.complain("DEBUG");
    instance.complain("WARNING");
    instance.complain("ERROR");
    instance.complain("UADSODASAASKDASJDASKJASDKDJAS");
	instance.complain("ERR");
	instance.complain("EBUG");
	instance.complain("");

    return 0;
}
