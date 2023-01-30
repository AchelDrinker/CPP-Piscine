/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:20:33 by humartin          #+#    #+#             */
/*   Updated: 2023/01/27 11:24:30 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Patrice"), grade(50)
{

	std::cout << "Welcome to the standard new Bureaucrat" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(std::string nom, int niveau) : name(nom)
{
	try
	{
		if (niveau > 150)
			throw (Bureaucrat::GradeTooLowExeption());
		else if (niveau < 1)
			throw (Bureaucrat::GradeTooHighExeption());
		else
		{
			grade = niveau;
			std::cout << "Welcome to the new Bureaucrat" << std::endl;
			return;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const& i)
{
	std::cout << "Bureaucrat is cloned !" << std::endl;
	(*this = i);
	return;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& i)
{
	std::cout << "Bureaucrat operator called !" << std::endl;
	if (this != &i)
	{
		this->name = i.name;
		this->grade = i.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat is fired !" << std::endl;
	return;
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::signForm(Form const& f)
{
	if (f.isS() == true)
	{
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	}
	else
	{
		std::cout << this->getName() << " couldn 't sign " << f.getName() \
		<< " because his grade is too low !" << std::endl;
	}
}

void Bureaucrat::executeForm(Form const& f)
{
	if (f.isS() == false)
	{
		std::cout << this->getName() << " couldn 't execute " << f.getName() \
		<< " because the form is not signed !" << std::endl;
	}
	else if (f.isS() == true && (this->getGrade() < f.getGradeE()))
	{
		std::cout << this->getName() << " executed " << f.getName() << std::endl;
	}
	else
	{
		std::cout << this->getName() << " couldn 't execute " << f.getName() \
		<< " because his grade is too low !" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const& i)
{
	try
	{
		if (i.getGrade() > 150)
			throw (Bureaucrat::GradeTooLowExeption());
		else if (i.getGrade() < 1)
			throw (Bureaucrat::GradeTooHighExeption());
		else
		{
			os << i.getName() << ", bureaucrat grade " << i.getGrade();
		}
	}
		catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (os);
}

void Bureaucrat::operator+=(Bureaucrat const& i)
{
	this->grade += i.grade;
}

void Bureaucrat::operator-=(Bureaucrat const& i)
{
	this->grade -= i.grade;
}

Bureaucrat& Bureaucrat::operator--(void)
{
	this->grade += 1;
	return (*this);
}

Bureaucrat Bureaucrat::operator--(int)
{
	Bureaucrat tmp = *this;
	this->grade += 1;
	return (tmp);
}

Bureaucrat& Bureaucrat::operator++(void)
{
	this->grade -= 1;
	return (*this);
}

Bureaucrat Bureaucrat::operator++(int)
{
	Bureaucrat tmp = *this;
	this->grade -= 1;
	return (tmp);
}


