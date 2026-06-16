/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 19:15:24 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/06/16 05:06:50 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<int> PmergeMe::generateJacobsthal(int n)
{
    std::vector<int> sequence;

    if (n == 0)
        return sequence;

    sequence.push_back(1);

    if (n == 1)
        return sequence;

    int a = 1, b = 3;

    sequence.push_back(b);

    int currentIndex = 0;

    while (true)
    {
        currentIndex = b + 2 * a;

        sequence.push_back(currentIndex);

        if (currentIndex > n)
            break;

        a = b;
        b = currentIndex;
    }

    return sequence;
}

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other)
{
    _vectorData = other._vectorData;
    _dequeData = other._dequeData;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if (this != &other)
    {
        _vectorData = other._vectorData;
        _dequeData = other._dequeData;
    }
    return *this;
}

void PmergeMe::processInput(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i)
    {
        std::string arg = argv[i];
        if (arg.find_first_not_of(" \t\n\v\f\r") == std::string::npos)
            throw std::exception();

        std::stringstream ss(arg);
        std::string num;

        while (ss >> num)
        {
            for (size_t j = 0; j < num.length(); ++j)
            {
                if (j == 0 && num[j] == '+')
                    continue;
                if (!isdigit(num[j]))
                    throw std::exception();
            }

            long value = std::atol(num.c_str());

            if (value < 0 || value > INT_MAX)
                throw std::exception();

            _vectorData.push_back(static_cast<int>(value));
            _dequeData.push_back(static_cast<int>(value));
        }
    }

    if (_vectorData.size() < 2 || _dequeData.size() < 2)
        throw std::exception();
}

void PmergeMe::printResults() const
{
    // Temporary debug print
    std::cout << "Vector size: " << _vectorData.size() << " -> ";
    for (size_t i = 0; i < _vectorData.size(); ++i)
        std::cout << _vectorData[i] << " ";
    std::cout << std::endl;

    std::cout << "Deque size: " << _dequeData.size() << " -> ";
    for (size_t i = 0; i < _dequeData.size(); ++i)
        std::cout << _dequeData[i] << " ";
    std::cout << std::endl;
}

PmergeMe::~PmergeMe() {}