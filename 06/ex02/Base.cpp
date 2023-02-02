/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:15:39 by humartin          #+#    #+#             */
/*   Updated: 2023/02/02 13:32:10 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
    return;
}

Base* generate(void)
{
    int nb = rand() % 3;
    
    switch(nb)
    {
        case 0:
             return (new A);
             break;
        case 1:
             return (new B);
             break;
        default:
             return (new C);
            break;        
    }
}

void identify(Base *p)
{
    if (dynamic_cast<A*>(p) != 0)
    {
        std::cout << "Base A " << std::endl;
    }
    else if (dynamic_cast<B*>(p) != 0)
    {
        std::cout << "Base B" << std::endl;
    }
    else if (dynamic_cast<C*>(p) != 0)
    {
        std::cout << "Base C" << std::endl;
    }
    else
        std::cout << "ERROR" << std::endl;
}

void identify (Base &p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "Base A" << std::endl;
    }
    catch(const std::exception& e)
    {

    }
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "Base B" << std::endl;
    }
    catch(const std::exception& e)
    {

    }
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "Base C" << std::endl;
    }
    catch(const std::exception& e)
    {
        
    }   
}
