/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 07:51:26 by aguay             #+#    #+#             */
/*   Updated: 2022/10/14 11:31:27 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <typeinfo>

template <typename T>
class Array
{
    public:

        //  Constructor's
        Array<T>(void) : _size(0){_array = new T[0];}

        Array<T>(unsigned int i) : _size(i){_array = new T[i];}

        Array<T>(Array<T> const & rhs)
        {
            _size = rhs.get_size();
            _array = new T[rhs.get_size()];
            *this = rhs;
        }

        //  Destructor
        ~Array<T>(void){delete [] _array;}

        //  Operation overload
        Array<T> const  operator=(Array const & rhs)
        {
            if (this != &rhs)
            {
                for (unsigned int i = 0; i < _size; i++)
                    set_array(i, rhs.get_array(i));
            }
            return (*this);
        }
        
        //  Methodes
        void    set_array(int index, T const value)
        {
            if (_size < static_cast<unsigned int>(index))
                throw OutOfBoundIndexException();
            _array[index] = value;
        }
        
        const T   get_array(int index) const
        {
            if (_size < static_cast<unsigned int>(index))
                throw OutOfBoundIndexException();
            return (_array[index]);
        }

        unsigned int    get_size(void) const
        {
            return (_size);
        }

        class   OutOfBoundIndexException : public std::exception
        {
            public:
                virtual const char  * what() const throw()
                {
                    return ("\033[31mIndex is out of bound. Segfault protection thrown.\033[0m");
                }
        };

    private:
        T               *_array;
        unsigned int    _size;
        
};
