/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:01:24 by humartin          #+#    #+#             */
/*   Updated: 2023/01/20 11:23:21 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_SCAVTRAP
#define DEF_SCAVTRAP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public :

	ScavTrap();
	ScavTrap(std::string nom);
	ScavTrap(ScavTrap const& i);
	ScavTrap &operator=(ScavTrap const& i);
	~ScavTrap();
	void guardGate(void);
	void showStatus(void) const;
};


#endif

