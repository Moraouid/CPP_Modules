/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 19:29:56 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/05/15 18:34:37 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
    T *Arr;
    unsigned int _size;

public:
    Array();
    Array(unsigned int n);
    Array(const Array &other);
    Array &operator=(const Array &other);
    T &operator[](unsigned int index);
    unsigned int size() const;
    ~Array();
};

/*-----------------------------------------------------------------------------------*/

template <typename T>
Array<T>::Array() : Arr(new T[0]), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : Arr(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(const Array &other) : Arr(new T[other._size]), _size(other._size)
{
    for (unsigned int i = 0; i < _size; ++i)
        Arr[i] = other.Arr[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this != &other)
    {
        delete[] Arr;
        _size = other._size;
        Arr = new T[_size];
        for (unsigned int i = 0; i < _size; ++i)
            Arr[i] = other.Arr[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array() { delete[] Arr; }

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::exception();
    return Arr[index];
}

template <typename T>
unsigned int Array<T>::size() const { return _size; }

#endif