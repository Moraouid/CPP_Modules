/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 05:54:34 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/05/22 00:04:28 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : con(), N(0) {}

Span::Span(unsigned int N) : con(), N(N) { con.reserve(N); }

Span::Span(const Span &other) : con(other.con), N(other.N) {}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        con = other.con;
        N = other.N;
    }
    return *this;
}

void Span::addNumber(int nb)
{
    if (con.size() == N)
        throw Span::SpanFullException();
    con.push_back(nb);
}

int Span::shortestSpan()
{
    int a = con.size();
    if (a <= 1)
        throw Span::SpanNotFoundException();
    std::sort(con.begin(), con.end());
    int min_span = con[1] - con[0];
    for (unsigned int i = 1; i < con.size(); i++)
    {
        if (min_span > con[i] - con[i - 1])
            min_span = con[i] - con[i - 1];
    }
    return min_span;
}

int Span::longestSpan()
{
    if (con.size() <= 1)
        throw Span::SpanNotFoundException();
    std::vector<int>::iterator max = std::max_element(con.begin(), con.end());
    std::vector<int>::iterator min = std::min_element(con.begin(), con.end());
    return *max - *min;
}

const char *Span::SpanFullException::what() const throw() { return "Span is Full"; };

const char *Span::SpanNotFoundException::what() const throw() { return "Span not Found"; };

Span::~Span() {}