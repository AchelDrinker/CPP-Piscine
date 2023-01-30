/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:24:02 by humartin          #+#    #+#             */
/*   Updated: 2023/01/23 11:36:21 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal's constructor is called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& i)
{
	std::cout << "Copy WrongAnimal constructor is called." << std::endl;
	*this = i;
	return;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& i)
{
	std::cout << "operator WrongAnimal is called." << std::endl;
	if (this != &i)
		this->type = i.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal's destructor is called." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "No sound !" << std::endl;
}

// ------------------------------WrongCat------------------------------

WrongCat::WrongCat()
{
	std::cout << "WrongCat's constructor is called." << std::endl;
}

WrongCat::WrongCat(WrongCat const& i)
{
	std::cout << "Copy WrongCat constructor is called." << std::endl;
	*this = i;
	return;
}

WrongCat& WrongCat::operator=(WrongCat const& i)
{
	std::cout << "operator WrongCat is called." << std::endl;
	if (this != &i)
		this->type = i.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat's destructor is called." << std::endl;
}

std::string WrongCat::getType() const
{
	return (this->type);
}

void WrongCat::makeSound(void) const
{
	std::cout << "I'm a cat and I say MEOOW." << std::endl;
}
