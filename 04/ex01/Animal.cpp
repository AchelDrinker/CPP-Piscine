/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:24:23 by humartin          #+#    #+#             */
/*   Updated: 2023/01/30 10:40:04 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//-------------Class Animal--------------------------

Animal::Animal() : type("Animal")
{
	std::cout << "Animal's constructor is called." << std::endl;
}

Animal::Animal(Animal const& i)
{
	std::cout << "Animal's copy is called." << std::endl;
	*this = i;
	return;
}

Animal& Animal::operator=(Animal const& i)
{
	std::cout << "Animal's operator is called." << std::endl;
	if (this != &i)
		this->type = i.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal's destructor is called." << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "No sound !" << std::endl;
}

//-------------Class Dog--------------------------

Dog::Dog() : Animal()
{
	brain = new Brain();
	type = "Dog";
	std::cout << "Dog's constructor is called." << std::endl;
	return;
}

Dog::Dog(Dog const& i) : Animal(i), brain(new Brain(*(i.brain)))
{
	std::cout << "Dog's copy is called." << std::endl;
	*this = i;
	return;
}

Dog& Dog::operator=(Dog const& i)
{
	std::cout << "operator Dog is called !" << std::endl;
	if (this != &i)
	{
		delete brain;
		brain = new Brain(*(i.brain));
		this->type = i.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog's destructor is called." << std::endl;
	return;
}

std::string Dog::getType() const
{
	return (this->type);
}

void Dog::makeSound(void) const
{
	std::cout << "I'm a dog and I say WOOOF." << std::endl;
}


//-------------Class Cat--------------------------

Cat::Cat() : Animal()
{
	brain = new Brain();
	type = "Cat";
	std::cout << "Cat's constructor is called." << std::endl;
	return;
}

Cat::Cat(Cat const& i) : Animal(i), brain(new Brain(*(i.brain)))
{
	std::cout << "Cat's copy is called." << std::endl;
	*this = i;
	return;
}

Cat& Cat::operator=(Cat const& i)
{
	std::cout << "operator Dog is called !" << std::endl;
	if (this != &i)
	{
		delete brain;
		brain = new Brain(*(i.brain));
		this->type = i.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat's destructor is called." << std::endl;
	return;
}

std::string Cat::getType() const
{
	return (this->type);
}

void Cat::makeSound(void) const
{
	std::cout << "I'm a cat and I say MEOOW." << std::endl;
}

//-------------Class Brain--------------------------

Brain::Brain()
{
	std::cout << "Brain's constructor is called." << std::endl;
}

Brain::Brain(Brain const& i)
{
	std::cout << "Copy Brain constructor is called." << std::endl;
	*this = i;
	return;
}

Brain& Brain::operator=(Brain const& i)
{
	int j = 0;

	std::cout << "operator Brain is called." << std::endl;
	while(j < (int)sizeof(ideas))
	{
		if (this != &i)
		{
			ideas[j] = i.ideas[j];
		}
		j++;
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain's destructor is called." << std::endl;
}
