/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:23:01 by humartin          #+#    #+#             */
/*   Updated: 2023/02/01 15:46:03 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

int main(int argc, char **argv)
{
    if (argc < 2 || argc > 2)
        std::cout << "ERROR : arguments !" << std::endl;
    else
        ft_convert(argv[1]);

        return 0;
}