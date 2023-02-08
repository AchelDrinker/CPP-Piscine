/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:40:52 by humartin          #+#    #+#             */
/*   Updated: 2023/02/03 11:20:07 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class Span
{
    public:
        Span(unsigned int n);
        Span(Span const &i);
        virtual ~Span();

        Span &operator=(Span const &i);

        void addNumber(int nb);
        int shortestSpan();
        int longestSpan();

    private:
        Span();
        std::vector<int> _container;
        unsigned int _size;
};





#endif