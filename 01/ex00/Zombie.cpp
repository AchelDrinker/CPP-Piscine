/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:03:51 by humartin          #+#    #+#             */
/*   Updated: 2023/01/09 15:08:37 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "I create A new Zombie !!!" << std::endl;
	return ;
}

Zombie::Zombie(std::string name) : p_name(name)
{
	std::cout << "I create A new Zombie !!!" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << p_name << ": is destroyed !" << std::endl;
	return ;
}

void Zombie::announce(void) const
{
	std::cout << p_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
