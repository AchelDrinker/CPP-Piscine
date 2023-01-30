/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:26:07 by humartin          #+#    #+#             */
/*   Updated: 2023/01/27 10:48:42 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
# include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string 	name;
		bool 				_signed;
		const int 			s_grade;
		const int 			ex_garde;

	public:
		Form(void);
		Form(std::string nom, int s_garde, int ex_garde);
		Form(const Form &i);
		Form& operator=(const Form& i);
		~Form();
		std::string getName(void) const;
		bool getSign(void) const;
		int	getGradeExec(void) const;
		int	getGradeSign(void) const;
		void beSigned(const Bureaucrat &bureau);
		class GradeTooHighException :public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("Bureaucrat::GradeTooHighException -> TOO HIGH ");
				}
		};
		class GradeTooLowException :public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("Bureaucrat::GradeTooLowException -> TOO LOW");
				}
		};
};
std::ostream& operator<<(std::ostream& out, Form const& i);
#endif
