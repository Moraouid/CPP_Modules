/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 05:54:53 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/05/22 00:01:58 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>

class Span
{
private:
    std::vector<int> con;
    unsigned int N;

public:
    Span();
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);

    void addNumber(int nb);
    template <typename T>
    void addNumber(T begin, T end);
    int shortestSpan();
    int longestSpan();

    class SpanFullException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class SpanNotFoundException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    ~Span();
};

template <typename T>
void Span::addNumber(T begin, T end)
{
    while (begin != end)
    {
        if (con.size() >= N)
            throw SpanFullException();
        con.push_back(*begin);
        ++begin;
    }
}

#endif