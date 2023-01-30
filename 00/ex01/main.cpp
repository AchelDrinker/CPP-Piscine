/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:45:37 by humartin          #+#    #+#             */
/*   Updated: 2023/01/09 14:04:30 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"



int main()
{
	int on_off(0);
	std::string res;
	PhoneBook list;

	list.introduction();
	std::cout << "\n";

	while (on_off == 0)
	{

		std::cout << " Commands :  \n" << std::endl;
		std::cout << "ADD" << std::endl;
		std::cout << "SEARCH" << std::endl;
		std::cout << "EXIT" << std::endl;
		std::cout << "----------" << std::endl;
		std::cout << "Your choice :";
		getline(std::cin, res);
		if (res == "ADD")
			list.addContact();
		else if (res == "SEARCH")
			list.showContact();
		else if (res == "EXIT")
			on_off = 1;
		else
		{
			std::cout << " INVALID COMMAND : try again !" << std::endl;
			std::cout << "\n";
		}
	}
	std::cout << "\n";
	std::cout << " Goodbye " << std::endl;

	return 0;
}
