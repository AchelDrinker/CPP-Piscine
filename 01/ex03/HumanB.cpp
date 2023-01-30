/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:38:34 by humartin          #+#    #+#             */
/*   Updated: 2023/01/11 17:06:14 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << _name << " : constructor called" << std::endl;
	_weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << _name << " : destructor called" << std::endl;
}

void	HumanB::attack(void)
{
	if(_weapon == NULL)
		std::cout << _name << " can't attack without weapon !"<< std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& type)
{
	_weapon = &type;
	std::cout << _name << " take a " << _weapon->getType() << std::endl;
}
