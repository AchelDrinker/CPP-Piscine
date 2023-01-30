/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:23:01 by humartin          #+#    #+#             */
/*   Updated: 2023/01/26 13:29:25 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

#define MIN_GRADE 150
#define MAX_GRADE 1

int main(void)
{
{
	{
	try
	{
		std::cout << "--------------------------Test 1--------------------------" << std::endl;
		Form f("asdf", MIN_GRADE + 1, MAX_GRADE);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	}
}
{
	{
	try
	{
		std::cout << "--------------------------Test 2--------------------------" << std::endl;
		Form f = Form("form 1", MIN_GRADE, MAX_GRADE - 1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	}
}
{
	{
	try
	{
		std::cout << "--------------------------Test 3--------------------------" << std::endl;
		Form f = Form("form 1", MAX_GRADE, MIN_GRADE);
		Bureaucrat b = Bureaucrat("b 1", 50);
		std::cout << f << std::endl;
		std::cout << b << std::endl;
		b.signForm(f);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	}
}
{
	try
	{
		std::cout << "--------------------------Test 4--------------------------" << std::endl;
		Form f = Form("form 1", MIN_GRADE, MIN_GRADE);
		Bureaucrat b = Bureaucrat("b 1", 50);
		std::cout << f << std::endl;
		std::cout << b << std::endl;
		b.signForm(f);
		std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	}
	std::cout << std::endl;
	return (0);
}
