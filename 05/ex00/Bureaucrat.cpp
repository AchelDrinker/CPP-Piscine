/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:51:44 by humartin          #+#    #+#             */
/*   Updated: 2023/01/26 13:05:06 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"){
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string nom, int gard) :name(nom), grade(gard){
	std::cout << "Bureaucrat Constructor created" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}
Bureaucrat::Bureaucrat(const Bureaucrat& i) :name(i.name), grade(i.grade){
	std::cout << "Bureaucrat copy Constructor created" << std::endl;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& i) {
	if (this == &i)
		return *this;
	grade = i.grade;
	return *this;
}
Bureaucrat::~Bureaucrat(void){
	std::cout << "Bureaucrat destructor called" << std::endl;
}
std::string Bureaucrat::getName() const{
	return (name);
}
int Bureaucrat::getGrade() const{
	return (grade);
}
void Bureaucrat::gardeUp(){
	if (grade <= 1){
		throw Bureaucrat::GradeTooLowException();
	}
	else
		grade--;
}
void Bureaucrat::gardeDown(){
	if (grade >= 150){
		throw Bureaucrat::GradeTooHighException();
	}
	else
		grade++;
}
std::ostream& operator<<(std::ostream& out, Bureaucrat const &i){
	out << i.getName()  << ", Bureaucrat grade " << i.getGrade() << ".\n";
	return (out);
}
