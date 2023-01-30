/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:03:47 by humartin          #+#    #+#             */
/*   Updated: 2023/01/09 15:00:38 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
	std::string p_name;

	public:
	Zombie(std::string name);
	Zombie();
	~Zombie();
	void announce() const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
