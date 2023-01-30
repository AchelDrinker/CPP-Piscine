/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:20:49 by humartin          #+#    #+#             */
/*   Updated: 2023/01/30 17:04:20 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_INTERN
#define DEF_INTERN

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Bureaucrat;
class Form;
class Presidential;
class Shrubbery;
class Robotomy;

class Intern
{
    public:

    Form* makeForm(std::string  const& name, std::string const&  target);
};

#endif

