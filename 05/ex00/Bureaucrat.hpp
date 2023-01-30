/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:51:49 by humartin          #+#    #+#             */
/*   Updated: 2023/01/27 10:48:42 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string nom, int gard);
		Bureaucrat(const Bureaucrat& i);
		Bureaucrat& operator=(const Bureaucrat& i);
		~Bureaucrat(void);
		void gardeUp();
		void gardeDown();
		std::string getName() const;
		int getGrade() const;
		class GradeTooHighException :public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("Bureaucrat::GradeTooHighException -> TOO HIGH ");
				}
		};
		class  GradeTooLowException :public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("Bureaucrat::GradeTooLowException -> TOO LOW");
				}
		};

	private:
		std::string const name;
		int grade;
};
	std::ostream& operator<<(std::ostream& out, Bureaucrat const &i);

#endif
