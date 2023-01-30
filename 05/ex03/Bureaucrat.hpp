/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:24:04 by humartin          #+#    #+#             */
/*   Updated: 2023/01/27 11:20:13 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string nom, int niveau);
		Bureaucrat(Bureaucrat const& i);
		Bureaucrat& operator=(Bureaucrat const& i);
		virtual ~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void operator+=(Bureaucrat const& i);
		void operator-=(Bureaucrat const& i);
		Bureaucrat& operator++(void);
		Bureaucrat operator++(int);
		Bureaucrat& operator--(void);
		Bureaucrat operator--(int);
		void signForm(Form const& f);
		void executeForm(Form const& f);

		class GradeTooHighExeption : public std::exception
		{
		public:
			const char * what() const throw()
			{
				return ("ERROR: Grade too high !\n");
			}
		};

		class GradeTooLowExeption : public std::exception
		{
			public:
				const char * what() const throw()
				{
					return ("ERROR: Grade too low !\n");
				}
		};
	private:
		std::string name;
		int grade;
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const& i);

#endif
