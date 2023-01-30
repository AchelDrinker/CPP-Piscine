/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:23:01 by humartin          #+#    #+#             */
/*   Updated: 2023/01/26 13:09:21 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void){
	std::cout << "_________  test __________" << std::endl;
	std::cout << std::endl;
	try {
		Bureaucrat Chef("Chef", 9);
		std::cout << Chef << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "_________ test 1 _________" << std::endl;
	std::cout << std::endl;
	try {
		Bureaucrat Chef1("Chef1", 0);
		std::cout << Chef1 << std::endl;
	} catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "_________  test 2 _________" << std::endl;
	std::cout << std::endl;
	try {
		Bureaucrat Chef2("Chef2", 150);
		std::cout << Chef2 << std::endl;
	} catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "_________ test 3 _________" << std::endl;
	std::cout << std::endl;
	try {
		Bureaucrat Chef3("Chef3", 151);
		std::cout << Chef3 << std::endl;
	} catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "_________  test 4 __________" << std::endl;
	std::cout << std::endl;
	try {
		Bureaucrat Chef4("Chef4", 1);
		Chef4.gardeDown();
		std::cout << Chef4 << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "_________  test 5 __________" << std::endl;
	std::cout << std::endl;
	try {
		Bureaucrat Chef5("Chef5", 2);
		Chef5.gardeUp();
		std::cout << Chef5 << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}

