/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 05:48:31 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/05/26 03:04:05 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <map>

class BitcoinExchange
{
private:
	std::map<std::string, float> Data;
	
	bool isValidDate(const std::string &date) const;
	bool isValidValue(const std::string &value) const;

public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &other);
	BitcoinExchange &operator=(const BitcoinExchange &other);

	void loadDatabase(const std::string &filename);
	void processInput(const std::string &filename);

	~BitcoinExchange();
};

#endif