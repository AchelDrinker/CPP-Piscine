/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:48:30 by humartin          #+#    #+#             */
/*   Updated: 2023/02/06 10:06:34 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> test(5);
    Array<std::string> test2(2);
    std::cout << "--------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "test creaction d'un tableau de int(5) et test2 de string(2)" << std::endl;
    std::cout << std::endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "Print Array int(5) test" << std::endl;
    srand(time(NULL));
    for (std::size_t i(0); i < test.size(); i++)
    {
        int numbers = rand() % 100 + 1;      
        test[i] = numbers;
    }
    test.print();
    
    std::cout << std::endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "Print Array string(2) test2" << std::endl;
    test2[0] = "Hugo";
    test2[1] = "Martineu";
    test2.print();
    
    std::cout << std::endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "test with false index" << std::endl;
    test2[4];
    test[-10];
    
    std::cout << std::endl;    
    std::cout << "--------------------------------" << std::endl;
    std::cout << "test3 = test3(test)" << std::endl;
    Array<int> test3(test);
    test3.print();

    std::cout << std::endl;    
    std::cout << "--------------------------------" << std::endl;
    std::cout << "test4 = test2" << std::endl;
    Array<std::string> test4 = test2;
    test4.print();

    std::cout << std::endl;    
    std::cout << "--------------------------------" << std::endl;
    std::cout << "test5 = test4" << std::endl;
    Array<std::string> test5;
    test5 = test4;
    test5.print();
    
    std::cout << "--------------------------------" << std::endl;
    std::cout << std::endl;
    return (0);
}