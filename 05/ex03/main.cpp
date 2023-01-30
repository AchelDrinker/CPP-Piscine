/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:23:01 by humartin          #+#    #+#             */
/*   Updated: 2023/01/30 17:14:08 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include "Intern.hpp"

int main()
{
    std::cout << "Formulary valid : (shrubbery creation) (robotomy request) (presidential pardon)" << std::endl;
    std::cout << std:: endl;

    Intern someRandomIntern;
    Form* rrf;

    rrf =  someRandomIntern.makeForm("presidential pardon", "Bender");

    if (rrf != NULL)
    {
        std::cout << *rrf << std::endl;
        std::cout << std:: endl;

        Bureaucrat b1("Patron", 1);
        std::cout << std::endl;
        rrf->beSigned(b1);
        b1.signForm(*rrf);
        std::cout << std::endl;
        rrf->execute(b1);
        b1.executeForm(*rrf);
        std::cout << std::endl;
    }
    delete rrf;

}