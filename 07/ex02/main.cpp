/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:48:30 by humartin          #+#    #+#             */
/*   Updated: 2023/02/02 14:01:01 by humartin         ###   ########.fr       */
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

   std::cout << "test1 creaction d'un tableau de int(5) et test2 de string(2)" << std::endl;

   srand(time(NULL));

   for (std::size_t i(0); i < test.size(); i++)
   {
         int numbers = rand() % 100 + 1;      
         test[i] = numbers;
   }

   test.print();
   std::cout << "--------------------------------" << std::endl;
   std::cout << std::endl;

   test2[0] = "Phoenix";
   test2[1] = "Wright";

   test2.print();
   std::cout << "--------------------------------" << std::endl;
   std::cout << std::endl;

   std::cout << "test avec des mauvais index" << std::endl;

   test2[4];
   test[-10];
   std::cout << "--------------------------------" << std::endl;
   std::cout << std::endl;


   std::cout << "test3 = test3(test)" << std::endl;

   Array<int> test3(test);

   test3.print();
   std::cout << "--------------------------------" << std::endl;
   std::cout << std::endl;

    std::cout << "test4 = test2 et test5 = test4" << std::endl;

    Array<std::string> test4 = test2;

    test4.print();
    std::cout << "--------------------------------" << std::endl;
    std::cout << std::endl;

    Array<std::string> test5;

    test5 = test4;

    test5.print();
    std::cout << "--------------------------------" << std::endl;
    std::cout << std::endl;

   /* std::cout << GREEN << "test principal" << std::endl;
    std::cout << std::endl;

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    numbers.print();
    std::cout << YELLOW << "--------------------------------" << std::endl;
    std::cout << std::endl;

    //SCOPE
    {
        Array<int> tmp = numbers;
        tmp.print();
         std::cout << YELLOW << "--------------------------------" << std::endl;
         std::cout << std::endl;
        Array<int> test6(tmp);
        test6.print();
         std::cout << YELLOW << "--------------------------------" << std::endl;
         std::cout << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

    
    delete [] mirror;//  */  

   std::cout << std::endl;



   return 0;
}