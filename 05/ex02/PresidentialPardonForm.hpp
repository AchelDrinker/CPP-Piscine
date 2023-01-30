/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:56:33 by humartin          #+#    #+#             */
/*   Updated: 2023/01/27 11:00:03 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;
class Form;

class Presidential : public Form
{
	public:
		Presidential(std::string const& target);
		Presidential(Presidential const& i);
		Presidential& operator=(Presidential const& i);
		virtual ~Presidential();
		void execute(Bureaucrat const& executor) const;

		class NotSignedExeption : public std::exception
		{
			public:
				const char * what() const throw()
				{
					return ("ERROR: Form Presidential is not signed !");
					}
		};
};

#endif
