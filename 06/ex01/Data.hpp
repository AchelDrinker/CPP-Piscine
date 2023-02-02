/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:45:41 by humartin          #+#    #+#             */
/*   Updated: 2023/02/02 11:56:43 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>

struct Data
{
    int i;
    std::string data;
    Data(int i, std::string data);
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
