/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:23:01 by humartin          #+#    #+#             */
/*   Updated: 2023/01/26 12:47:36 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
//-----------------------------------TEST 1-------------------------------------------

	std::cout << "----------------------------------Test 1------------------------------------" << std::endl;
	std::cout << std::endl;
	const Animal* j = new Dog();
	std::cout << "-------------------------" << std::endl;
	const Animal* i = new Cat();
	std::cout << std::endl;
	j->makeSound();
	std::cout << "-------------------------" << std::endl;
	i->makeSound();
	std::cout << std::endl;
	delete j;
	std::cout << "-------------------------" << std::endl;
	delete i;

//-----------------------------------TEST 2-------------------------------------------

	std::cout << "----------------------------------Test 2------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "Tableau de 10 animaux" << std::endl;
	Animal* z[10];
	std::cout << std::endl;
	int ii = 0;
	while(ii < 5)
	{
		z[ii] = new Dog();
		std::cout << "-------------------------" << std::endl;
		ii++;
	}
	ii = 5;
	while(ii < 10)
	{
		z[ii] = new Cat;
		std::cout << "-------------------------" << std::endl;
		ii++;
	}
	std::cout << std::endl;
	std::cout << "--------------------ANIMALS SOUND-------------------------------" << std::endl;
	std::cout << std::endl;
	ii = 0;
	while(ii < 10)
	{
		z[ii]->makeSound();
		std::cout << "-------------------------" << std::endl;
		ii++;
	}
	std::cout << std::endl;
	ii = 0;
	while(ii < 10)
	{
		delete z[ii];
		std::cout << "-------------------------" << std::endl;
		ii++;
	}

	//-----------------------------------TEST 3-------------------------------------------
	std::cout << std::endl;
	std::cout << "--------------------Test 3-------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "Edit the test 3 in the main by erasing commentary" << std::endl;
	std::cout << std::endl;
/*
	Animal test;
*/

	return 0;
}
