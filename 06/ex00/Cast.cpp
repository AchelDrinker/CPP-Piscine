/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:39:20 by humartin          #+#    #+#             */
/*   Updated: 2023/02/02 13:42:48 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

void ft_convert(char *argv)
{
    std::string s_string;
    double d_double;

    int n_decimal;
    int whole_part;
    int i;

    d_double = std::strtod(argv, NULL);
    s_string = std::to_string(d_double);

    if (d_double == 0 && argv[0] != '0' && argv[1] != '\0')
    {
        std::cout << "Error : unknown input !" << std::endl;
    }
    else
    {
        if (d_double == 0 && argv[1] == '\0')
            d_double = static_cast<double>(argv[0]);
    
        i = 0;
        while (argv[i] != '.' && argv[i])
            i++;
        if (argv[i] == '.')
        {
            n_decimal = i;
            i++;
        while (argv[i] >= '0' && argv[i] <= '9')
        {
            i++;
        }
        n_decimal = i - n_decimal - 1;
        if (n_decimal > 4)
            n_decimal = 4;
        }
        else
            n_decimal = 1;

        whole_part = 0;
        while (s_string[whole_part] != '.' && s_string[whole_part])
            whole_part++;
        if (s_string[0] == '-')
            whole_part--;
        if (whole_part < 7)
            std::cout << std::fixed << std::setprecision(n_decimal);

        ft_char(d_double, s_string);
        ft_int(d_double, s_string);
        ft_float(d_double, s_string);
        ft_double(d_double);
    }
}

void ft_char(double const &d_double, std::string const& s_string)
{
    char c_char;

    if (d_double < std::numeric_limits<char>::min() || d_double > std::numeric_limits<char>::max())
        std::cout << "char : Over limits" << std::endl;
    else if ((d_double >= 32 && d_double <= 47) || (d_double >= 57 && d_double <= 126))
    {
        c_char = static_cast<char>(d_double);
        std::cout << "char : " << c_char << std::endl;
    }
    else if (!s_string.find("nan") || !s_string.find("inf") \
    || !s_string.find("+inf") || !s_string.find("-inf") \
    || !s_string.find("+nan") || !s_string.find("-nan"))
    {
        std::cout << "char : impossible" << std::endl;
    }
    else
        std::cout << "char : Non displayable" << std::endl;
}

void ft_int(double const& d_double, std::string const& s_string)
{
    int i_int;

    if (d_double < std::numeric_limits<int>::min() || d_double > std::numeric_limits<int>::max())
    {
        std::cout << "int : Over limits" << std::endl;
    }
    else if (!s_string.find("nan") || !s_string.find("inf") \
    || !s_string.find("+inf") || !s_string.find("-inf") \
    || !s_string.find("-nan") || !s_string.find("+nan"))
    {
        std::cout << "int : impossible" << std::endl;

    }
    else if (d_double == 48)
    {
       std::cout << "int : " << 0 << std::endl; 
    }
    else
    {
        i_int = static_cast<int>(d_double);
        std::cout << "int : " << i_int << std::endl;
    }
}

void ft_float(double const& d_double, std::string const& s_string)
{
    float f_float;

    
    if (!s_string.find("inf") || !s_string.find("+inf"))
        std::cout << "float : " << "inff" << std::endl;
    else if (!s_string.find("-inf"))
        std::cout << "float : " << "-inff" << std::endl;
    else if (!s_string.find("+nan") || !s_string.find("-nan"))
        std::cout << "float : " << "nanf" << std::endl;
    else if (d_double < std::numeric_limits<float>::min() || d_double > std::numeric_limits<float>::max())
    {
        std::cout << "float : Over limits !" << std::endl;
    }
    else if (d_double == 48)
    {
        std::cout << "float : " << "0.0f" << std::endl;
    }
    else
    {
        f_float = static_cast<float>(d_double);
        std::cout << "float : " << f_float << "f" << std::endl;
    }

}

void ft_double(double const& d_double)
{
    if (d_double == 48)
        std::cout << "double : " << 0.0 << std::endl; 
    else
        std::cout << "double : " << static_cast<double>(d_double) << std::endl;
}
