/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:27:35 by humartin          #+#    #+#             */
/*   Updated: 2023/01/11 14:31:59 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;


	std::cout << "--------------Ennoncé-------------------" << std::endl;
	std::cout << "je suis la string originelle : "<< string << std::endl;
	std::cout << "je suis le pointeur de la string : " << *stringPTR << std::endl;
	std::cout << "je suis la référence du pointeur : " << stringREF << std::endl;

	std::cout << "--------------Test 1-------------------" << std::endl;
	std::cout << "je suis l'adresse de la string : "<< &string << std::endl;
	std::cout << "je suis l'adresse du pointeur : " << &stringPTR << std::endl;
	std::cout << "je suis l'adresse de la référence : " << &stringREF << std::endl;

	std::cout << "--------------Test 2-------------------" << std::endl;
	std::cout << "je suis la string originelle : "<< string << std::endl;
	std::cout << "je suis le pointeur de la string : " << *stringPTR << std::endl;
	std::cout << "je suis la référence du pointeur : " << stringREF << std::endl;

	return(0);
}
