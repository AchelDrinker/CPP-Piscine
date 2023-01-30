/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:01:21 by humartin          #+#    #+#             */
/*   Updated: 2023/01/20 11:46:53 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	name = "Scav_Trap";
	hp = 100;
	ep = 50;
	att = 20;

	std::cout << "ScavTrap constructor default is called." << std::endl;

	return ;

}

ScavTrap::ScavTrap(std::string nom) : ClapTrap(nom)
{
	hp = 100;
	ep = 50;
	att = 20;

	std::cout << "ScavTrap constructor is called." << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const& i)
{
	std::cout << "Copy ScavTrap constructor is called." << std::endl;
	*this = i;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor is called." << std::endl;
	return;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &i)
{
	std::cout << " Copy assignement operator is called." << std::endl;
	if (this != &i)
	{
		this->name = i.name;
		this->hp = i.hp;
		this->ep = i.ep;
		this->att = i.att;
	}
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << name << " is on guard ! " << std::endl;
}

void ScavTrap::showStatus(void) const
{
	if (this->hp > 0)
	{
		std::cout << "ScavTrap status." << std::endl;
		std::cout << "----------------------------" << std::endl;
		std::cout << "NAME : " << this->name << std::endl;
		std::cout << "----------------------------" << std::endl;
		std::cout << "HP : " << this->hp << std::endl;
		std::cout << "----------------------------" << std::endl;
		std::cout << "EP : " << this->ep << std::endl;
		std::cout << "----------------------------" << std::endl;
		std::cout << "ATT : " << this->att << std::endl;
	}
	else
		std::cout << this->name << " is fainted..." << std::endl;
}
