/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:27:35 by humartin          #+#    #+#             */
/*   Updated: 2023/01/20 10:47:57 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	system("clear");
	std::string name;
	std::string answer;
	std::cout << "Salut !" << std::endl;
	std::cout << "Toujours à l'heure pour prendre l'apéro à ce que je vois." << std::endl;
	std::cout << "T'es le pote de Michel, c'est ça ?" << std::endl;
	getline(std::cin, answer);
	system("clear");
	if(answer == "OUI" || answer == "Oui" || answer == "oui" || answer == "YES" || answer == "Yes" || answer == "yes")
	{
		std::cout << "C'est bien ce qu'il me semblait. Tu t'appelles comment déjà ?" << std::endl;
		getline(std::cin, name);
		system("clear");
		std::cout << "Ah oui, c'est vrai. Bah écoute " << name << ", rentres et mets toi à l'aise." << std::endl;
		ClapTrap instance1(name);
	}
	else
	{
		system("clear");
		std::cout << "Mais t'es qui alors ?" << std::endl;
		std::cout << "..." << std::endl;
		sleep(1);
		std::cout << "..." << std::endl;
		sleep(1);
		std::cout << "..." << std::endl;
		sleep(1);
		std::cout << "Mais bordel, je te reconnais ! T'es le voisin du 5ème qui a appelé les flics l'autre coup !" << std::endl;
		std::cout << "Casse toi de chez moi !" << std::endl;
	}
	return(0);
}
