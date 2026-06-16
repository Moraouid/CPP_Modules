/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 03:35:29 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/06/16 05:05:26 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <climits>
#include <cstdlib>
#include <deque>
#include <exception>
#include <iostream>
#include <sstream>
#include <vector>

class PmergeMe
{
private:
    std::vector<int> _vectorData;
    std::deque<int> _dequeData;

    void sortVector(std::vector<int> &vec);
    void sortDeque(std::deque<int> &deq);

public:
    std::vector<int> generateJacobsthal(int n);
    PmergeMe();
    PmergeMe(const PmergeMe &other);
    PmergeMe &operator=(const PmergeMe &other);

    void processInput(int argc, char **argv);
    void sortData();
    void printResults() const;

    ~PmergeMe();
};

#endif