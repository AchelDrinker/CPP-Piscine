/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:24:21 by humartin          #+#    #+#             */
/*   Updated: 2023/01/23 14:12:51 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include "Animal.hpp"

class WrongAnimal
{
	protected:
	std::string type;

	public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const& i);
	WrongAnimal &operator=(WrongAnimal const& i);
	virtual ~WrongAnimal();
	virtual std::string getType() const;
	void makeSound() const;
};

class WrongCat : public WrongAnimal
{
	public:
	WrongCat();
	WrongCat(WrongCat const& i);
	WrongCat &operator=(WrongCat const& i);
	virtual ~WrongCat();
	virtual std::string getType() const;
	void makeSound() const;
};

#endif
