/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:27:35 by humartin          #+#    #+#             */
/*   Updated: 2023/01/12 10:57:29 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
		Harl instance1(argv[1]);
	else
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return(1);
	}
	return(0);
}
