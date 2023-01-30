/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 08:43:47 by humartin          #+#    #+#             */
/*   Updated: 2023/01/16 13:12:45 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return (0);
}
/*

int main(void)
{

	std::cout << "-------------------test1----------------------" << std::endl;

	Fixed a;

	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "Incrementation de a avec ++a puis a++" << std::endl;

	std::cout << a <<std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << "____________________AFFICHE B_____________" << std::endl;

	std::cout << b << std:: endl;

	std::cout << "__________________AFFICHE MAX_______________________" << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << "-------------------test2----------------------" << std::endl;

	std::cout << "Decrementation de a avec --a puis a--" << std::endl;

	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << "__________________AFFICHE MIN_______________________" << std::endl;

	std::cout << Fixed::min(a, b) << std::endl;


	std::cout << "-------------------test3----------------------" << std::endl;

	Fixed c (10);
	Fixed d (12);
	Fixed e (2);

	std::cout << "valeur de c = 10 , valeur de d = 12, valeur de e = 2" << std::endl;

	std::cout << "__________________COMPARAISON_______________________" << std::endl;

	std::cout << " c == e ?" << std::endl;

	c == e ? std::cout << "Oui ils sont egaux" << std::endl : std::cout << "Non ils sont differents" << std::endl;

	std::cout << " c != e ?" << std::endl;

	c != e ? std::cout << "Oui ils sont differents" << std::endl : std::cout << "Non ils sont egaux" << std::endl;

	std::cout << " c < d ?" << std::endl;

	c < d ? std::cout << "c plus petit que d" << std::endl : std::cout << "c plus grand que d" << std::endl;

	std::cout << " d > e ?" << std::endl;

	d > e ? std::cout << "d plus grand que e" << std::endl : std::cout << "d plus petit que e" << std::endl;



	std::cout << "__________________CALCUL_______________________" << std::endl;

	std::cout << " c + d = " << c + d << std::endl;

	std::cout << " c - d = " << c - d << std::endl;

	std::cout << "c * e = " << c * e << std::endl;

	std::cout << " d / e = " << d / e << std::endl;


	std::cout << "-------------------test4----------------------" << std::endl;

	Fixed f (7.35f);
	Fixed g (7.35f);
	Fixed h (14.27f);

	std::cout << "valeur de f = 7.35 , valeur de g = 7.35, valeur de h = 14.27" << std::endl;

	std::cout << "__________________COMPARAISON_______________________" << std::endl;

	std::cout << " f == g ?" << std::endl;

	f == g ? std::cout << "Oui ils sont egaux" << std::endl : std::cout << "Non ils sont differents" << std::endl;

	std::cout << " g != h ?" << std::endl;

	f != h ? std::cout << "Oui ils sont differents" << std::endl : std::cout << "Non ils sont egaux" << std::endl;

	std::cout << " f < h ?" << std::endl;

	f < h ? std::cout << "f plus petit que h" << std::endl : std::cout << "f plus grand que h" << std::endl;

	std::cout << " h > g ?" << std::endl;

	h > g ? std::cout << "h plus grand que g" << std::endl : std::cout << "h plus petit que g" << std::endl;



	std::cout << "__________________CALCUL_______________________" << std::endl;

	std::cout << " h + g = " << h + g << std::endl;

	std::cout << " h - f = " << h - f << std::endl;

	std::cout << "h * f = " << h * f << std::endl;

	std::cout << " f / g = " << f / g << std::endl;
}
*/
