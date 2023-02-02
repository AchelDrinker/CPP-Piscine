/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:50:20 by humartin          #+#    #+#             */
/*   Updated: 2023/02/02 14:01:42 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>

template<typename T>
class Array
{
    private:

    T  *_array;
    std::size_t _size;
   

    public:
    Array();   
    Array(unsigned int n);
    Array(Array<T> const& cln);
    Array& operator=(Array<T> const &cln);
    T& operator[](int idx) const;
    virtual ~Array();
    class InvalidArray : public std::exception
    {
        public:
        const char * what() const throw()
        {
            return ("invalid index !");
        }
    };
    std::size_t size() const;
    void print() const;
};

    template<typename T>
    Array<T>::Array()
    {
        _array = new T[0];
        _array = nullptr;
        _size = 0;

        std::cout << "Constructor Default is called !" << std::endl;
        return;
    }

    template<typename T>
    Array<T>::Array(unsigned int n)
    {
        _size = n;
        _array = new T[this->_size];
        for (std::size_t i = 0; i < _size; i++)
            _array[i] = i;

        std::cout << "Constructor is called" << std::endl;
    }

    template<typename T>
    Array<T>::Array(Array<T> const& cln) : _array(new T[cln._size]), _size(cln._size)
    {
        for (std::size_t i = 0; i < cln._size; i++)
            _array[i] = cln._array[i];

        std::cout << "Constructor by copy is called" << std::endl;
    }

    template< typename T >
    Array<T>& Array<T>::operator=(Array<T> const &cln)
    {
        std::cout << "operator= is called" << std::endl;
        if (this != &cln)
        {
            delete[] _array;
            _size = cln._size;
            _array = new T[_size];
            for (std::size_t i(0); i < _size; i++)
                _array[i] = cln._array[i];
        }

        
        return (*this);
    }


    template<typename T>
    T& Array<T>::operator[](int idx) const
    {
        try
        {
            if (idx < 0 || idx >= (int)_size)
                throw(Array<T>::InvalidArray());
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }      
        return (_array[idx]);
    }
    
    template<typename T>
    Array<T>::~Array()
    {
        delete[] _array;
        std::cout << "Destructor is called " << std::endl;
    }

    template<typename T>
    std::size_t Array<T>::size() const
    {
        return (_size);
    }

    template<typename T>
    void Array<T>::print() const
    {
        for (std::size_t i = 0; i < _size; i++)
            std::cout << "array[" << i << "] = " << _array[i] << std::endl; 
    }

#endif
