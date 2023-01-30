/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:23:01 by humartin          #+#    #+#             */
/*   Updated: 2023/01/27 11:28:44 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
//----------------------------------TEST AVEC LE FORMULAIRE SHRUBERRY--------------------

	std::cout << "-----test form_Shruberry-----" << std::endl;
	std::cout << std::endl;
	Bureaucrat b1("Jeanne", 100);
	Bureaucrat b2("D'arc", 150);
	std::cout << "---------------------------" << std::endl;
	Form* f1 = new Shrubbery("jardin");
	std::cout << b1 << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << b2 << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << *f1 << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	f1->execute(b1);
	std::cout << "---------------------------" << std::endl;
	b1.executeForm(*f1);
	std::cout << "---------------------------" << std::endl;
	f1->beSigned(b2);
	std::cout << "---------------------------" << std::endl;
	b2.signForm(*f1);
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	f1->beSigned(b1);
	std::cout << "---------------------------" << std::endl;
	b1.signForm(*f1);
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	f1->execute(b2);
	std::cout << "---------------------------" << std::endl;
	b2.executeForm(*f1);
	std::cout << "---------------------------" << std::endl;
	f1->execute(b1);
	std::cout << "---------------------------" << std::endl;
	b1.executeForm(*f1);
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	delete f1;
	std::cout << std::endl;

//-----------------------------TEST_FORMULAIRE ROBOTOMY----------------------------------------------

	std::cout << "-----test form_Robotomy-----" << std::endl;
	std::cout << std::endl;
	Bureaucrat b3("Enzo et sa voix d'ange", 41);
	Bureaucrat b4("L'idalgo qui va a la salle", 46);
	std::cout << "---------------------------" << std::endl;
	Form* f2 = new Robotomy("Atom");
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << b3 << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << b4 << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << *f2 << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	f2->beSigned(b1);
	std::cout << "---------------------------" << std::endl;
	b1.signForm(*f2);
	std::cout << "---------------------------" << std::endl;
	f2->beSigned(b4);
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	f2->beSigned(b4);
	std::cout << "---------------------------" << std::endl;
	b4.signForm(*f2);
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	f2->execute(b3);
	std::cout << "---------------------------" << std::endl;
	b3.executeForm(*f2);
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	delete f2;
	std::cout << std::endl;

//----------------------------TEST_FORM_PRESIDENTIAL--------------------------------

	std::cout << "-----test form_Presidential-----" << std::endl;
	std::cout << std::endl;
	Bureaucrat b5("Michel c'est le Brésil", 3);
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	Form *f3 = new Presidential("Manau");
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << b5 << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << *f3 << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	f3->execute(b5);
	std::cout << "---------------------------" << std::endl;
	b5.executeForm(*f3);
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	f3->beSigned(b5);
	std::cout << "---------------------------" << std::endl;
	b5.signForm(*f3);
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	f3->execute(b5);
	std::cout << "---------------------------" << std::endl;
	b5.executeForm(*f3);
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	delete f3;
}
