/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:19:59 by humartin          #+#    #+#             */
/*   Updated: 2023/01/16 09:54:33 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed(Fixed const& src);
	Fixed &	operator=(Fixed const& rhs);
	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _number1;
	int const static _number2 = 8;
};

#endif
