/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 08:51:43 by humartin          #+#    #+#             */
/*   Updated: 2023/01/20 11:28:08 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Clap_Trap"), hp(10), ep(10), att(0)
{
	std::cout << "ClapTrap constructor default is called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string nom) : name(nom), hp(10), ep(10), att(0)
{
	std::cout << "ClapTrap constructor is called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const& i)
{
	std::cout << "Copy ClapTrap constructor is called." << std::endl;
	*this = i;
	return ;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& i)
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

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor is called." << std::endl;
}

void ClapTrap::showStatus(void) const
{
	if (this->hp > 0)
	{
		std::cout << "ClapTrap status." << std::endl;
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

void ClapTrap::attack(const::std::string& target)
{
	if (this->ep > 0 && this->hp > 0)
	{
		std::cout << this->name << " attacks " << target << " causing " << this->att << " points of damage" << std::endl;
		this->ep -= 1;
	}
	else
		std::cout << this->name << " cannot attacks " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp > 0)
	{
		std::cout << this->name << " take " << amount << " damage !" << std::endl;
		this->hp -= amount;
		if (this->hp < 0)
			this->hp = 0;
	}
	else
		std::cout << this->name << " is already fainted !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->ep > 0 && this->hp > 0)
	{
		std::cout << this->name << " repaired " << amount << " hp !" << std::endl;
		this->hp += amount;
		this->ep -= 1;
	}
	else
		std::cout << this->name << " cannot repaired !" << std::endl;
}

std::string ClapTrap::getName()
{
	return (name);
}

unsigned int ClapTrap::getAtt()
{
	return (att);
}
