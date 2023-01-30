/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 08:51:46 by humartin          #+#    #+#             */
/*   Updated: 2023/01/20 11:19:36 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <unistd.h>

class ClapTrap
{
	protected:

	std::string name;
	int hp;
	unsigned int ep;
	unsigned int att;

	public:


	ClapTrap();
	ClapTrap(std::string nom);
	ClapTrap(ClapTrap const& i);
	ClapTrap &operator=(ClapTrap const& i);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void showStatus(void) const;
	std::string getName();
	unsigned int getAtt();
};

#endif
