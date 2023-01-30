/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:27:35 by humartin          #+#    #+#             */
/*   Updated: 2023/01/20 11:25:34 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "----------OPERATORS----------" << std::endl;
	std::cout <<"       ----------------    " << std::endl;
	std::cout <<"       ----------------    " << std::endl;
	std::cout << std::endl;

	ClapTrap player1("Michel");
	ScavTrap player2("Bernard");

	player1.showStatus();
	std::cout << "-------------------------------"  << std::endl;
	std::cout<<std::endl;
	player2.showStatus();
	std::cout << "-------------------------------"  << std::endl;
	std::cout << std::endl;
	player2.attack(player1.getName());
	player1.takeDamage(player2.getAtt());
	player1.beRepaired(5);
	std::cout << "-------------------------------"  << std::endl;
	std::cout << std::endl;
	player2.guardGate();
	std::cout << "-------------------------------"  << std::endl;
	std::cout << std::endl;
	player1.showStatus();
	std::cout << "-------------------------------"  << std::endl;
	std::cout<<std::endl;
	player2.showStatus();
	std::cout << "-------------------------------"  << std::endl;
	std::cout << std::endl;
	std::cout << "----------DESTRUCTORS----------" << std::endl;
	std::cout <<"       ----------------    " << std::endl;
	std::cout <<"       ----------------    " << std::endl;
	std::cout << std::endl;

}

