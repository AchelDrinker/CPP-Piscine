/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:39:01 by humartin          #+#    #+#             */
/*   Updated: 2023/01/12 11:14:46 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
public:
	Harl(std::string choice);
	~Harl();
	void complain( std::string level );

private:
	std::string _choice;
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
