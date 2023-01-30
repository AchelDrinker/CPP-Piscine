/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:36:08 by humartin          #+#    #+#             */
/*   Updated: 2023/01/20 11:47:23 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	name = "Frag_Trap";
	hp = 100;
	ep = 100;
	att = 30;

	std::cout << "FragTrap constructor default is called." << std::endl;

	return ;
}

FragTrap::FragTrap(std::string nom) : ClapTrap(nom)
{
	hp = 100;
	ep = 50;
	att = 30;

	std::cout << "FragTrap constructor is called." << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const& i)
{
	std::cout << "Copy FragTrap constructor is called." << std::endl;
	*this = i;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor is called." << std::endl;
	return;
}

FragTrap& FragTrap::operator=(FragTrap const &i)
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

void FragTrap::highFivesGuys()
{
	std::cout << name << "ask a High Five !" << std::endl;
}

void FragTrap::showStatus(void) const
{
	if (this->hp > 0)
	{
		std::cout << "FragTrap status." << std::endl;
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
