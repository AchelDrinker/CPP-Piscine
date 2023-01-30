/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 08:51:43 by humartin          #+#    #+#             */
/*   Updated: 2023/01/20 10:50:36 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	_lifePoints = 0;
	_energyPoints = 10;
	_attackDamage = 0;
	std::string answer;
	std::cout << _name << " entre dans la soirée." << std::endl;
	std::cout << "Pose toi dans le canap'." << std::endl;
	while(1)
	{
		std::cout << "Tu veux une bière ou une part de pizza ?" << std::endl;
		std::cout << "Dis-moi quand tu veux rentrer chez toi, ton safe code c'est 'aubergine'." << std::endl;
		getline(std::cin, answer);
		system("clear");
		if(answer == "aubergine" || answer == "Aubergine")
			break;
		else if(_lifePoints != 10 && _energyPoints != 0)
		{
			if (answer == "biere" || answer == "bière" || answer == " Biere" || answer == "Bière" || answer == "beer" || answer == " Beer" || answer == "pizza" || answer == "Pizza")
			{
				std::cout << "Bouge pas, je te sers ça." << std::endl;
				if(answer == "pizza" || answer == "Pizza")
					beRepaired(1);
				else
				{
					attack(answer);
					takeDamage(1);
				}
			}
			else
				std::cout << "Désolé, j'ai pas ça." << std::endl;
		}
		else if (_lifePoints == 10)
			std::cout << "Mec t'es trop sec, casse toi de chez moi avant de gerber dans un coin." << std::endl;
		else
		{
			std::cout << "T'as cru pouvoir venir et tout consommer sans en laisser aux autres ?" << std::endl;
			std::cout << "Michel ! Explique à ton pote qu'il est de trop dans cette soirée." << std::endl;
		}
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " sors de la soirée avec " << _lifePoints << " grammes et " << _energyPoints << " actions disponibles." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << _name << " prends une " << target << ", cela occasionne " << _attackDamage <<" points de dégats à la " << target << " et ça met bien." << std::endl;
	_energyPoints -= 1;
	std::cout << _name << " perd 1 point d'actions, il t'en reste " << _energyPoints << "." << std::endl;
	std::cout << "Je consomme ma " << target << "."<< std::endl;
	std::cout << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " prend " << amount <<" gramme d'alcool dans le sang!" << std::endl;
	_lifePoints += amount;
	std::cout << _name << " a " << _lifePoints <<" grammes d'alcool dans le sang et est capable de faire " << _energyPoints << " actions." << std::endl;
	std::cout << "J'ai fini ma bière." << std::endl;
	std::cout << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << _name << " prends une part de pizza pour se remettre d'aplomb, ça lui coute 1 point d'actions!" << std::endl;
	if(_lifePoints != 0)
		_lifePoints -= amount;
	else
		std::cout << "T'as pas de gramme d'alcool dans le sang." << std::endl;
	_energyPoints -= 1;
	std::cout << _name << " a " << _lifePoints <<" grammes dans le sang et " << _energyPoints << " points d'actions." << std::endl;
	std::cout << "J'ai fini ma pizza." << std::endl;
	std::cout << std::endl;
}
