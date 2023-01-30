/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:59:05 by humartin          #+#    #+#             */
/*   Updated: 2023/01/27 11:25:43 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form;

class Robotomy : public Form
{
	public:
		Robotomy(std::string const& target);
		Robotomy(Robotomy const& i);
		Robotomy& operator=(Robotomy const& i);
		virtual ~Robotomy();
		void execute(Bureaucrat const& executor) const;

		class NotSignedExeption : public std::exception
		{
			public:
				const char * what() const throw()
				{
					return ("ERROR: Form Robotomy is not signed !");
				}
		};
};

#endif

