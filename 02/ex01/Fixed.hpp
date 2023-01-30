/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:19:59 by humartin          #+#    #+#             */
/*   Updated: 2023/01/16 10:00:15 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(Fixed const& i);
	~Fixed();
	Fixed &	operator=(Fixed const& i);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	void getStream(std::ostream& os) const;

private:
	int _number1;
	int const static _number2 = 8;
};
	std::ostream& operator<<(std::ostream& os, Fixed const& i);

#endif
