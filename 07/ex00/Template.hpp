/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:50:20 by humartin          #+#    #+#             */
/*   Updated: 2023/02/02 13:50:45 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>
#include <string>

template<typename S>
void swap( S& a, S& b)
{
    S c;
    c = a;
    a = b;
    b = c;
}

template<typename T>
T max(T const& a, T const& b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

template<typename M>
M min(M const& a, M const& b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

#endif
