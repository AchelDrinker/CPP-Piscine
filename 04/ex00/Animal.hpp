/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:24:10 by humartin          #+#    #+#             */
/*   Updated: 2023/01/24 14:07:44 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(Animal const& i);
		Animal &	operator=(Animal const& i);
		virtual ~Animal();
		virtual std::string getType(void) const;
		virtual void makeSound(void) const;

	protected:
		std::string type;

};

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const& i);
		Cat &operator=(Cat const& i);
		virtual ~Cat();
		virtual std::string getType(void) const;
		virtual void makeSound(void) const;

	protected:
		std::string type;

};

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const& i);
		Dog &operator=(Dog const& i);
		virtual ~Dog();
		virtual std::string getType(void) const;
		virtual void makeSound(void) const;

	protected:
		std::string type;

};

#endif
