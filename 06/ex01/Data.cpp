/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:58:47 by humartin          #+#    #+#             */
/*   Updated: 2023/02/02 11:58:48 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
    uintptr_t raw;
    raw = reinterpret_cast<uintptr_t>(ptr);
    return (raw);
}

Data* deserialize(uintptr_t raw)
{
    Data* ptr;
    ptr = reinterpret_cast<Data*>(raw);
    return (ptr);
}

Data::Data(int i, std::string data) : i(i), data(data)
{
}
