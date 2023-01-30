/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:30:48 by humartin          #+#    #+#             */
/*   Updated: 2023/01/11 13:17:53 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *z = new Zombie[N];
	int i(0);
	while(N > i)
	{
		z[i].getName(name);
		std::cout << "Zombie number : " << i << " ";
		z[i].announce();
		i++;
	}
	return (z);
}
