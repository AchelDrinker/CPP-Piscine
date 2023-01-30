/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:59:59 by humartin          #+#    #+#             */
/*   Updated: 2023/01/27 11:26:15 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

Shrubbery::Shrubbery(std::string const& target)
{
	this->name = target;
	this->grade_s = 145;
	this->grade_e = 137;
	this->isSigned = false;
	std::cout << "Form Shrubbery is created !" << std::endl;
	return;
}

Shrubbery::Shrubbery(Shrubbery const& i)
{
	std::cout << "Form Shrubbery is cloned !" << std::endl;
	*this = i;
	return;
}
Shrubbery& Shrubbery::operator=(Shrubbery const& i)
{
	std::cout << "operator Shrubbery is created !" << std::endl;
	if (this != &i)
	{
		this->name = i.name;
		this->grade_s = i.grade_s;
		this->grade_e = i.grade_e;
		this->isSigned = i.isSigned;
	}
	return (*this);
}
Shrubbery::~Shrubbery()
{
	std::cout << "Form Shrubbery is destroyed !" << std::endl;
	return;
}
void Shrubbery::execute(Bureaucrat const& executor) const
{
	try
	{
		if (this->isS() == false)
			throw(Shrubbery::NotSignedExeption());
		if (executor.getGrade() > this->getGradeE())
			throw(Shrubbery::GradeTooLowExeption());
		else
		{
			std::ofstream of(this->getName()+"_shruberry");
			if (of)
			{
				of << "                         " << std::endl;
				of << "            v            " << std::endl;
				of << "           >X<           " << std::endl;
				of << "            A            " << std::endl;
				of << "           d$b           " << std::endl;
				of << "         .di$$b.         " << std::endl;
				of << "       .d$i$$i$$b.       " << std::endl;
				of << "          d$$@b          " << std::endl;
				of << "         di$$$ib         " << std::endl;
				of << "       .d$$$i$$$b        " << std::endl;
				of << "     .d$$@$$$$i$$ib.     " << std::endl;
				of << "         d$$i$$b         " << std::endl;
				of << "        di$$$$@$b        " << std::endl;
				of << "     .d$@$$i$$$$$@b.     " << std::endl;
				of << "   .d$$$$i$$$i$$$$$$b.   " << std::endl;
				of << "           ###           " << std::endl;
				of << "           ###           " << std::endl;
				of << "           ###           " << std::endl;
			}
			else
			{
				std::cout << "ERROR: can't open the file !" << std::endl;
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return;
}
