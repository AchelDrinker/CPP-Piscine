/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:30:30 by humartin          #+#    #+#             */
/*   Updated: 2023/01/11 13:22:45 by humartin         ###   ########.fr       */
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
	std::string getName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
