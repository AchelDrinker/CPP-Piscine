/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:20:46 by humartin          #+#    #+#             */
/*   Updated: 2023/01/30 17:06:49 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form* Intern::makeForm(std::string const& name, std::string const&  target)
{
    Form* f;
    std::string tab[3];
    int count = 0;

    tab[0] = "shrubbery creation";
    tab[1] = "robotomy request";
    tab[2] = "presidential pardon";

    for (int i(0); i < 3; i++)
    {
        if (tab[i] == name)
            break;
        count++;
    }

    switch(count)
    {
        case 0:
            f = new Shrubbery(target);
            break;
        case 1:
            f = new Robotomy(target);
            break;
        case 2:
            f = new Presidential(target);
            break;
        default:
            std::cout << "ERROR: undefined name formulary ! " << std::endl;
            f = NULL;
    }
    return (f);
}