/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:50:20 by humartin          #+#    #+#             */
/*   Updated: 2023/02/02 13:59:00 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename T>
void iter(T const *tab, int const size, void (*f)(T const &val))
{
    for (int i(0); i < size; i++)
    {
        f(tab[i]);
    }
}

template <typename T>
void f(T const &val)
{
    static int i = 0;
    std::cout << "tab["<< i << "] = " << val << std::endl;
    i++;
}

#endif
