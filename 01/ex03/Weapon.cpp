/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:38:25 by humartin          #+#    #+#             */
/*   Updated: 2023/01/11 17:10:40 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) : _name(name)
{
	std::cout << _name << " : constructor called" << std::endl;
	setType(name);
}

Weapon::~Weapon()
{
	std::cout << _name << " : destructor called" << std::endl;
}

std::string	Weapon::getType(void) const
{
	return(this->_name);
}

void	Weapon::setType(std:: string str)
{
	this->_name = str;

	return;
}
