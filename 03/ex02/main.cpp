/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:27:35 by humartin          #+#    #+#             */
/*   Updated: 2023/01/20 11:44:41 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "----------OPERATORS----------" << std::endl;
	std::cout <<"       ----------------    " << std::endl;
	std::cout <<"       ----------------    " << std::endl;
	std::cout << std::endl;

	ClapTrap player1("Michel");
	ScavTrap player2("Bernard");
	FragTrap player3("Henry");

	player1.showStatus();
	std::cout << "-------------------------------"  << std::endl;
	std::cout<<std::endl;
	player2.showStatus();
	std::cout << "-------------------------------"  << std::endl;
	std::cout << std::endl;
	player3.showStatus();
	std::cout << "-------------------------------"  << std::endl;
	std::cout << std::endl;
	player2.attack(player3.getName());
	player3.takeDamage(player2.getAtt());
	player3.beRepaired(10);
	std::cout << "-------------------------------"  << std::endl;
	std::cout << std::endl;
	player2.guardGate();
	player3.highFivesGuys();
	std::cout << "-------------------------------"  << std::endl;
	std::cout << std::endl;
	player1.showStatus();
	std::cout << "-------------------------------"  << std::endl;
	std::cout<<std::endl;
	player2.showStatus();
	std::cout << "-------------------------------"  << std::endl;
	std::cout << std::endl;
	player3.showStatus();
	std::cout << "-------------------------------"  << std::endl;
	std::cout << std::endl;
	std::cout << "----------DESTRUCTORS----------" << std::endl;
	std::cout <<"       ----------------    " << std::endl;
	std::cout <<"       ----------------    " << std::endl;
	std::cout << std::endl;

}

