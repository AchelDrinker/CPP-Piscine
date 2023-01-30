/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:01:31 by humartin          #+#    #+#             */
/*   Updated: 2023/01/09 15:06:28 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "------------First------------" << std::endl;
	std::string player("Billy");
	std::string zombie1("Zombite");
	std::string zombie2("Zobi");

	Zombie z1(player);

	z1.announce();

	std::cout << "------------Second-------------" << std::endl;

	Zombie *z2 = newZombie(zombie1);

	z2->announce();

	delete z2;

	std::cout << "------------Third-------------" << std::endl;

	randomChump(zombie2);

	return (0);
}
