/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:55:27 by humartin          #+#    #+#             */
/*   Updated: 2023/01/27 11:03:14 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

Presidential::Presidential(std::string const& target)
{
	this->name = target;
	this->grade_s = 25;
	this->grade_e = 5;
	this->isSigned = false;
	std::cout << "Form Presidential is created !" << std::endl;
}

Presidential::Presidential(Presidential const& i)
{
	std::cout << "Form Presidential is cloned !" << std::endl;
	*this = i;
	return ;
}

Presidential& Presidential::operator=(Presidential const& i)
{
	std::cout << "operator Presidential is created !" << std::endl;
	if (this != &i)
	{
		this->name = i.name;
		this->grade_s = i.grade_s;
		this->grade_e = i.grade_e;
		this->isSigned = i.isSigned;
	}
	return (*this);
}

Presidential::~Presidential()
{
	std::cout << "Presidential Form is destroyed !" << std::endl;
	return;
}

void Presidential::execute(Bureaucrat const& executor) const
{
	try
	{
		if (this->isS() == false)
			throw(Presidential::NotSignedExeption());
		if (executor.getGrade() > this->getGradeE())
			throw(Presidential::GradeTooLowExeption());
		else
		{
			std::cout << this->getName() << " forgived by Macron Explosion !" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return ;
}

