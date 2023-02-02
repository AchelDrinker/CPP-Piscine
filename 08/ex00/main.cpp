/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:04:59 by humartin          #+#    #+#             */
/*   Updated: 2023/02/02 14:08:58 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"
#include <cstdlib>
#include <ctime>

class Generate
{
    public:
    int operator()() const
    {
        return rand() % 10;
    }
};

int main()
{
    std::cout << "-----test(avec un tableau de 10 nombres aléatoires)-----" << std::endl;
    srand(time(NULL));
    std::vector<int> tab(10, -1);

    generate(tab.begin(), tab.end(), Generate());

    std::vector<int>::iterator it;

    for (it = tab.begin(); it != tab.end(); it++)
        std::cout << *it << std::endl; 

    std::cout << "----------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "on cherche le chiffre 2 dans notre tableau" << std::endl;


    ::easyFind(tab, 2);

    std::cout << "on cherche le chiffre 4 dans notre tableau" << std::endl;

    ::easyFind(tab, 4);

    std::cout << "on cherche le chiffre 6 dans notre tableau" << std::endl;

    ::easyFind(tab, 6);

    std::cout << "------------------fin du test--------------" << std::endl;

    return 0;

}