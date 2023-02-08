/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:42:00 by humartin          #+#    #+#             */
/*   Updated: 2023/02/03 11:20:32 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(unsigned int n) : _size(n)
{
}

Span::Span(Span const &i)
{
    *this = i;
}

Span::~Span()
{
}

Span &Span::operator=(Span const &other)
{
    if (this != &other)
    {
        this->_container = other._container;
        this->_size = other._size;
    }
    return (*this);
}

void Span::addNumber(int nb)
{
    if (this->_container.size() < this->_size)
        this->_container.push_back(nb);
    else
        throw std::exception();
}

int Span::shortestSpan()
{
    if (this->_container.size() <= 1)
        throw std::exception();
    std::sort(this->_container.begin(), this->_container.end());
    int min = this->_container[1] - this->_container[0];
    for (unsigned int i = 1; i < this->_container.size() - 1; i++)
    {
        if (this->_container[i + 1] - this->_container[i] < min)
            min = this->_container[i + 1] - this->_container[i];
    }
    return (min);
}

int Span::longestSpan()
{
    if (this->_container.size() <= 1)
        throw std::exception();
    std::sort(this->_container.begin(), this->_container.end());
    return (this->_container[this->_container.size() - 1] - this->_container[0]);
}