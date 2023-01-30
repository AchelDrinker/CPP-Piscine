/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:39:04 by humartin          #+#    #+#             */
/*   Updated: 2023/01/12 14:09:50 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(std::string choice) : _choice(choice)
{
	std::cout << "Constructor called" << std::endl;
	complain(choice);
}

Harl::~Harl()
{
	std::cout << "Destructor called" << std::endl;
}

void Harl::debug( void )
{
	std::cout << "DEBUG : I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}
void Harl::info( void )
{
	std::cout << "INFO : I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "WARNING : I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
	std::cout << "ERROR : This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	int i = 0;
	if (level == "1" || level == "DEBUG" || level == "debug")
		i = 1;
	else if (level == "2" || level == "INFO" || level == "info")
		i = 2;
	else if (level == "3" || level == "WARNING" || level == "warning")
		i = 3;
	else if (level == "4" || level == "ERROR" || level == "error")
		i = 4;
	else
		i = 5;

	switch(i)
	{
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		case 1:
			debug();
		case 2:
			info();
		case 3:
			warning();
		case 4:
			error();
	}
	return;
}
