/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:24:53 by humartin          #+#    #+#             */
/*   Updated: 2023/01/27 09:53:25 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default")
{
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string nom, int gard) :name(nom), grade(gard)
{
	std::cout << "Bureaucrat Constructor created" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}
Bureaucrat::Bureaucrat(const Bureaucrat& i) :name(i.name), grade(i.grade)
{
	std::cout << "Bureaucrat copy Constructor created" << std::endl;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& i)
{
	if (this == &i)
		return *this;
	grade = i.grade;
	return *this;
}
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}
std::string Bureaucrat::getName() const
{
	return (name);
}
int Bureaucrat::getGrade() const
{
	return (grade);
}
void Bureaucrat::gardeUp()
{
	if (grade <= 1){
		throw Bureaucrat::GradeTooLowException();
	}
	else
		grade--;
}
void Bureaucrat::gardeDown()
{
	if (grade >= 150){
		throw Bureaucrat::GradeTooHighException();
	}
	else
		grade++;
}
void Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << "Bureaucrat " << *this << " signed form " << form << "." << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Bureaucrat " << *this << " couldn't sign form " << form << " because " << e.what() <<  "." << std::endl;
	}
}
std::ostream& operator<<(std::ostream& out, Bureaucrat const &i){
	return (out << i.getName() << ", bureaucrat grade " << i.getGrade());
}
