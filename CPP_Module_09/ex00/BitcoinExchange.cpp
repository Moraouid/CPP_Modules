/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 23:57:41 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/05/26 18:24:09 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
		this->Data = other.Data;
	return *this;
}

bool BitcoinExchange::isValidDate(const std::string &date) const
{
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return false;

	for (size_t i = 0; i < date.length(); i++)
	{
		if (i == 4 || i == 7)
			continue;
		if (!isdigit(date[i]))
			return false;
	}

	std::string yearStr = date.substr(0, 4);
	std::string monthStr = date.substr(5, 2);
	std::string dayStr = date.substr(8, 2);

	int year = std::atoi(yearStr.c_str());
	int month = std::atoi(monthStr.c_str());
	int day = std::atoi(dayStr.c_str());

	if (year < 2009)
		return false;
	if (month < 1 || month > 12)
		return false;
	if (day < 1 || day > 31)
		return false;

	return true;
}

bool BitcoinExchange::isValidValue(const std::string &value) const
{
	if (value.empty())
		return false;

	char *endptr;
	double val = std::strtod(value.c_str(), &endptr);
	if (value.c_str() == endptr || *endptr != '\0')
		return false;

	if (val < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return false;
	}
	else if (val > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return false;
	}

	return true;
}

void BitcoinExchange::loadDatabase(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "Error: could not open database file" << std::endl;
		return;
	}

	std::string line;
	std::getline(file, line);

	while (std::getline(file, line))
	{
		size_t delemter = line.find(",");
		if (delemter == std::string::npos)
			continue;

		std::string date = line.substr(0, delemter);
		std::string value = line.substr(delemter + 1);

		if (isValidDate(date))
			Data[date] = std::strtod(value.c_str(), NULL);
	}
	file.close();
}

void BitcoinExchange::processInput(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return;
	}

	std::string FristLine;
	std::getline(file, FristLine);

	if (FristLine != "date | value")
	{
		std::cerr << "Error: invalid file format" << std::endl;
		return;
	}

	std::string line;
	while (std::getline(file, line))
	{
		size_t delemter = line.find(" | ");
		if (delemter == std::string::npos)
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		std::string date = line.substr(0, delemter);
		std::string value = line.substr(delemter + 3);

		if (!isValidDate(date))
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			continue;
		}
		else if (!isValidValue(value))
			continue;

		std::map<std::string, float>::iterator it = Data.lower_bound(date);
		if (it == Data.end() || it->first != date)
		{
			if (it == Data.begin())
			{
				std::cerr << "Error: no exchange rate available for date => " << date << std::endl;
				continue;
			}
			it--;
		}

		float exchangeRate = it->second;
		std::cout << date << " => " << value << " = " << exchangeRate * std::atof(value.c_str()) << std::endl;
	}
	file.close();
}

BitcoinExchange::~BitcoinExchange() {}