/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:26:07 by humartin          #+#    #+#             */
/*   Updated: 2023/01/27 11:14:50 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string _name, int _grade_s, int _grade_e);
		Form(Form const& i);
		Form& operator=(Form const& i);
		virtual ~Form();
		std::string getName() const;
		virtual int getGradeS() const;
		virtual int getGradeE() const;
		virtual bool isS() const;
		virtual void beSigned(Bureaucrat const& i);
		virtual void execute(Bureaucrat const& executor) const = 0;

		class GradeTooHighExeption : public std::exception
		{
			public:
				const char * what() const throw()
				{
					return ("Error: Grade too high !\n");
				}
		};

		class GradeTooLowExeption : public std::exception
		{
			public:
				const char * what() const throw()
				{
					return ("Error: Grade too low !\n");
				}
		};

	protected:
		std::string name;
		int grade_s;
		int grade_e;
		bool isSigned;
};

std::ostream& operator<<(std::ostream& os, Form const& i);

#endif
