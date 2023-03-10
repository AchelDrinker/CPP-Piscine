/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:06:00 by humartin          #+#    #+#             */
/*   Updated: 2023/02/07 08:50:20 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

template <class T> 
void easyFind(T const &container, int nb)
{
    typename T::const_iterator it = find(container.begin(), container.end(), nb);

    if (it == container.end())
        std::cout << nb << " est perdu quelque part !" << std::endl;
    else
        std::cout << nb << " a été trouvé !" << std::endl;
}

#endif
