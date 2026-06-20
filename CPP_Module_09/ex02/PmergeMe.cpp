/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 19:15:24 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/06/20 04:27:34 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <algorithm>

std::vector<int> PmergeMe::generateJacobsthal(int n)
{
    std::vector<int> sequence;

    sequence.push_back(1);

    int a = 1, b = 3, c = 1;

    int currentIndex = 0;

    while (b <= n)
    {
        sequence.push_back(b);

        for (int i = b - 1; i > c; i--)
            sequence.push_back(i);

        c = b;
        currentIndex = b + 2 * a;
        a = b;
        b = currentIndex;
    }

    for (int i = n; i > c; --i)
        sequence.push_back(i);

    return sequence;
}

std::vector<int> PmergeMe::sortVector(std::vector<int> &vec)
{
    if (vec.size() < 2)
        return vec;

    if (vec.size() == 2)
    {
        if (vec[0] > vec[1])
            std::swap(vec[0], vec[1]);
        return vec;
    }

    int oddNumber = -1;
    if (vec.size() % 2 != 0)
    {
        oddNumber = vec.back();
        vec.pop_back();
    }

    std::vector<int> losers;
    std::vector<int> winners;

    for (size_t i = 0; i < vec.size(); i += 2)
    {
        if (vec[i] > vec[i + 1])
        {
            losers.push_back(vec[i + 1]);
            winners.push_back(vec[i]);
        }
        else
        {
            losers.push_back(vec[i]);
            winners.push_back(vec[i + 1]);
        }
    }

    std::vector<int> sortedA = PmergeMe::sortVector(winners);
    std::vector<int> sortedB(sortedA.size());
    std::vector<bool> used(winners.size(), false);

    for (size_t i = 0; i < sortedA.size(); i++)
    {
        for (size_t j = 0; j < sortedA.size(); j++)
        {
            if (winners[j] == sortedA[i] && !used[j])
            {
                sortedB[i] = losers[j];
                used[j] = true;
                break;
            }
        }
    }

    std::vector<int> res;
    res.push_back(sortedB[0]);

    for (size_t i = 0; i < sortedA.size(); i++)
        res.push_back(sortedA[i]);

    if (oddNumber != -1)
        sortedB.push_back(oddNumber);

    std::vector<int> order = generateJacobsthal(sortedB.size());

    for (size_t i = 1; i < order.size(); i++)
    {
        size_t idx = order[i] - 1;
        int target = sortedB[idx];

        std::vector<int>::iterator bound;

        if (idx < sortedA.size())
        {
            int pairedWinner = sortedA[idx];
            bound = std::find(res.begin(), res.end(), pairedWinner);
        }
        else
            bound = res.end();

        std::vector<int>::iterator pos = std::lower_bound(res.begin(), bound, target);

        res.insert(pos, target);
    }
    vec = res;
    return vec;
}

std::deque<int> PmergeMe::sortDeque(std::deque<int> &deq)
{
    if (deq.size() < 2)
        return deq;

    if (deq.size() == 2)
    {
        if (deq[0] > deq[1])
            std::swap(deq[0], deq[1]);
        return deq;
    }

    int oddNumber = -1;
    if (deq.size() % 2 != 0)
    {
        oddNumber = deq.back();
        deq.pop_back();
    }

    std::deque<int> losers;
    std::deque<int> winners;

    for (size_t i = 0; i < deq.size(); i += 2)
    {
        if (deq[i] > deq[i + 1])
        {
            losers.push_back(deq[i + 1]);
            winners.push_back(deq[i]);
        }
        else
        {
            losers.push_back(deq[i]);
            winners.push_back(deq[i + 1]);
        }
    }

    std::deque<int> sortedA = PmergeMe::sortDeque(winners);
    std::deque<int> sortedB(sortedA.size());
    std::vector<bool> used(winners.size(), false);

    for (size_t i = 0; i < sortedA.size(); i++)
    {
        for (size_t j = 0; j < sortedA.size(); j++)
        {
            if (winners[j] == sortedA[i] && !used[j])
            {
                sortedB[i] = losers[j];
                used[j] = true;
                break;
            }
        }
    }

    std::deque<int> res;
    res.push_back(sortedB[0]);

    for (size_t i = 0; i < sortedA.size(); i++)
        res.push_back(sortedA[i]);

    if (oddNumber != -1)
        sortedB.push_back(oddNumber);

    std::vector<int> order = generateJacobsthal(sortedB.size());
    for (size_t i = 1; i < order.size(); i++)
    {
        size_t idx = order[i] - 1;
        int target = sortedB[idx];

        std::deque<int>::iterator bound;

        if (idx < sortedA.size())
        {
            int pairedWinner = sortedA[idx];
            bound = std::find(res.begin(), res.end(), pairedWinner);
        }
        else
            bound = res.end();

        std::deque<int>::iterator pos = std::lower_bound(res.begin(), bound, target);

        res.insert(pos, target);
    }
    deq = res;
    return deq;
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

            if (std::find(_vectorData.begin(), _vectorData.end(), value) != _vectorData.end())
                throw std::exception();

            if (value < 0 || value > INT_MAX)
                throw std::exception();

            _vectorData.push_back(static_cast<int>(value));
            _dequeData.push_back(static_cast<int>(value));
        }
    }

    if (_vectorData.size() < 2 || _dequeData.size() < 2)
        throw std::exception();
}

void PmergeMe::sortData()
{
    struct timeval start, end;

    gettimeofday(&start, NULL);
    sortVector(_vectorData);
    gettimeofday(&end, NULL);
    _vectorTime = (end.tv_sec - start.tv_sec) * 1000000.0 + (end.tv_usec - start.tv_usec);

    gettimeofday(&start, NULL);
    sortDeque(_dequeData);
    gettimeofday(&end, NULL);
    _dequeTime = (end.tv_sec - start.tv_sec) * 1000000.0 + (end.tv_usec - start.tv_usec);
}

void PmergeMe::printResults(char **argv, int argc) const
{
    std::cout << "Before: ";
    for (int i = 1; i < argc && i < 6; ++i)
        std::cout << argv[i] << " ";
    if (argc > 6)
        std::cout << "[...]";
    std::cout << std::endl;

    std::cout << "After:  ";
    for (size_t i = 0; i < _vectorData.size() && i < 5; ++i)
        std::cout << _vectorData[i] << " ";
    if (_vectorData.size() > 5)
        std::cout << "[...]";
    std::cout << std::endl;

    std::cout << "Time to process a range of " << _vectorData.size()
              << " elements with std::vector : " << _vectorTime << " us" << std::endl;

    std::cout << "Time to process a range of " << _dequeData.size()
              << " elements with std::deque  : " << _dequeTime << " us" << std::endl;
}

PmergeMe::~PmergeMe() {}