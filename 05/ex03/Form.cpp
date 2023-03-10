/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:25:23 by humartin          #+#    #+#             */
/*   Updated: 2023/01/27 11:17:40 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("formulary"), grade_s(20), grade_e(20), isSigned(false)
{
	return;
}

Form::Form(std::string _name, int _grade_s, int _grade_e)
{
	name = _name;
	try
	{
		if (_grade_s > 150 || _grade_e > 150)
			throw(Form::GradeTooLowExeption());
		else if (_grade_e < 1 || _grade_s < 1)
			throw(Form::GradeTooHighExeption());
		else
		{
			grade_s = _grade_s;
			grade_e = _grade_e;
			isSigned = false;
			std::cout << "Formulary created !" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
	std::cerr << e.what() << std::endl;
	}
}

Form::Form(Form const& i)
{
	std::cout << "Formulary is cloned !" << std::endl;
	(*this = i);
	return;
}

//OPERATORS----------------------------------------------------------

Form& Form::operator=(Form const& i)
{
	std::cout << "Form operator called !" << std::endl;
	if (this != &i)
	{
		this->name = i.name;
		this->grade_s = i.grade_s;
		this->grade_e = i.grade_e;
		this->isSigned = i.isSigned;
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Form is destroyed !" << std::endl;
	return;
}

std::string Form::getName() const
{
	return (this->name);
}

int Form::getGradeS() const
{
	return (this->grade_s);
}

int Form::getGradeE() const
{
	return (this->grade_e);
}

bool Form::isS() const
{
	return (this->isSigned);
}

void Form::beSigned(Bureaucrat const& i)
{
	try
	{
		if (i.getGrade() > this->grade_s)
			throw(Form::GradeTooLowExeption());
		else
			this->isSigned = true;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::ostream& operator<<(std::ostream& os, Form const& i)
{
	os << "name: " << i.getName() << "\n"
	<< " grade for signed: " << i.getGradeS() << "\n"
	<< " grade for execute: " << i.getGradeE() << "\n"
	<< " is signed ? " << i.isS() << std::endl;
	return (os);

}
