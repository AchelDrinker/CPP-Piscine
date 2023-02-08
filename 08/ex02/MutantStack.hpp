/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 09:33:14 by humartin          #+#    #+#             */
/*   Updated: 2023/02/07 08:50:20 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() : std::stack<T>() {}
    MutantStack(MutantStack const &src) : std::stack<T>(src) {}
    virtual ~MutantStack() {}

    MutantStack &operator=(MutantStack const &rhs)
    {
        if (this != &rhs)
            std::stack<T>::operator=(rhs);
        return *this;
    }
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin()
    {
        return std::stack<T>::c.begin();
    }
    iterator end()
    {
        return std::stack<T>::c.end();
    }
};