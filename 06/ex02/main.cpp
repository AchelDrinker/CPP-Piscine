/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:23:01 by humartin          #+#    #+#             */
/*   Updated: 2023/02/02 13:35:17 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    std::cout << "-------test 1------(no generate)" << std::endl;
    std::cout << std::endl;

    Base* p1 = new A();
    Base* p2 = new B();
    Base* p3 = new C();

     identify(p1);
     std::cout << "----------------------" << std::endl;
     identify(p2);
     std::cout << "----------------------" << std::endl;
     identify(p3);
     std::cout << "----------------------" << std::endl;
     std::cout << std::endl;

     identify(*p1);
     std::cout << "----------------------" << std::endl;
     identify(*p2);
     std::cout << "----------------------" << std::endl;
     identify(*p3);
     std::cout << "----------------------" << std::endl;
     std::cout << std::endl;

     std::cout << "-------test 2------(generate rand base)" << std::endl;
    std::cout << std::endl;

    Base *p6;
    Base *p4;
    Base *p5;

    srand(time(NULL));
    p6 = generate();
    p4 = generate();
    p5 = generate();

    identify(p6);
     std::cout << "----------------------" << std::endl;
     identify(p4);
     std::cout << "----------------------" << std::endl;
     identify(p5);
     std::cout << "----------------------" << std::endl;
     std::cout << std::endl;

     identify(*p6);
     std::cout << "----------------------" << std::endl;
     identify(*p4);
     std::cout << "----------------------" << std::endl;
     identify(*p5);
     std::cout << "----------------------" << std::endl;
     std::cout << std::endl;



}
