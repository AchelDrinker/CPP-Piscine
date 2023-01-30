/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:57:17 by humartin          #+#    #+#             */
/*   Updated: 2023/01/27 10:52:52 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

Robotomy::Robotomy(std::string const& target)
{
	this->name = target;
	this->grade_s = 72;
	this->grade_e = 45;
	this->isSigned = false;
	std::cout << "Form Robotomy created !" << std::endl;
	return;
}

Robotomy::Robotomy(Robotomy const& i)
{
	std::cout << "Form Robotomy is cloned !" << std::endl;
	*this = i;
	return;
}

Robotomy& Robotomy::operator=(Robotomy const& i)
{
	std::cout << "Robotomy operator created !" << std::endl;
	if (this != &i)
	{
		this->name = i.name;
		this->grade_s = 72;
		this->grade_e = 42;
		this->isSigned = i.isSigned;
	}
	return (*this);
}

Robotomy::~Robotomy()
{
	std::cout << "Form Robotory is destroyed !" << std::endl;
	return;
}

void Robotomy::execute(Bureaucrat const& executor) const
{
	try
	{
		if (this->isS() == false)
			throw(Robotomy::NotSignedExeption());
		if (this->grade_e < executor.getGrade())
			throw(Robotomy::GradeTooLowExeption());
		else
		{
			std::cout << "*sound Drill drdrdrdrdrdrd !!!!!!*" <<std::endl;
			sleep(5);
			srand(time(NULL));
			int nb = rand() % 10 + 1;
			//std::cout << nb << std:: endl;
			if (nb <= 5)
				std::cout << this->getName() << " is fulled Robotised !!!!" << std::endl;
			else if (nb > 5)
			std::cout << "Operations failed !!!" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
