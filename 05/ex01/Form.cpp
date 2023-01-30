/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:25:23 by humartin          #+#    #+#             */
/*   Updated: 2023/01/27 09:53:16 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : s_grade(0), ex_garde(0)
{
	std::cout << "Form Default Constructor called" << std::endl;
		throw std::invalid_argument("Form::InvalidConstructorCall");
		_signed = false;
}
Form::Form(std::string nom, int s_garde, int ex_garde) : name(nom), s_grade(s_garde), ex_garde(ex_garde)
{
		if (s_garde < 1 || ex_garde < 1)
			throw Form::GradeTooHighException();
		if (s_garde > 150 || ex_garde > 150)
			throw Form::GradeTooLowException();
		_signed = false;
}
Form::Form(const Form &i) : name(i.name), s_grade(i.s_grade), ex_garde(i.ex_garde)
{
	std::cout << "Constructor Form by copy called" << std::endl;
	_signed = false;
}
Form& Form::operator=(const Form& i)
{
	(void)i;
		throw std::invalid_argument("Form::InvalidConstructorCall");
}
Form::~Form()
{
	std::cout << "Form Destructor called" <<std::endl;
}

std::string Form::getName(void) const
{
	return (name);
}
bool Form::getSign(void) const
{
	return (_signed);
}
int	Form::getGradeExec(void) const
{
	return (ex_garde);
}
int	Form::getGradeSign(void) const
{
	return (s_grade);
}

void Form::beSigned(const Bureaucrat &bureau)
{
	if (bureau.getGrade() > s_grade)
		throw Bureaucrat::GradeTooLowException();
	else if (_signed == true)
	std::invalid_argument("Form::IsSignedException");
	else
		_signed = true;
}

std::ostream& operator<<(std::ostream&out, Form const& i)
{
	return (out << i.getName() << ", sign grade " << i.getGradeSign() << ", exec grade " << i.getGradeExec());
}
