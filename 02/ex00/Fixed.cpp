/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:19:45 by humartin          #+#    #+#             */
/*   Updated: 2023/01/16 09:52:58 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _number1(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const& i) : _number1(0)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = i;
}

Fixed& Fixed::operator=(Fixed const& i)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &i)
		this->_number1 = i.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawbits member function called" << std::endl;
	return (this->_number1);
}

void Fixed::setRawBits(int const raw)
{
	this->_number1 = raw;
}
