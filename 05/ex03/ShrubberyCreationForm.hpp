/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:08:48 by humartin          #+#    #+#             */
/*   Updated: 2023/01/27 11:25:43 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;
class Form;

class Shrubbery : public Form
{
	public:
		Shrubbery(std::string const& target);
		Shrubbery(Shrubbery const& i);
		Shrubbery& operator=(Shrubbery const& i);
		virtual ~Shrubbery();
		void execute(Bureaucrat const& executor) const;

		class NotSignedExeption : public std::exception
		{
			public :
				const char * what() const throw()
				{
					return ("ERROR: Form Shrubbery is not signed !");
				}
		};
};

#endif

