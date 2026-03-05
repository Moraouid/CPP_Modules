/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 17:55:51 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/03/05 23:20:12 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool isChar(std::string s)
{
    return (s.length() == 1 && !std::isdigit(s[0]));
}

bool isInt(std::string s)
{
    size_t i = 0;
    if (s[0] == '-' || s[0] == '+')
        i = 1;
    for (; i < s.length(); i++)
    {
        if (!std::isdigit(s[i]))
            return false;
    }
    return true;
}

bool isFloat(std::string s)
{
    if (s == "nanf" || s == "+inff" || s == "-inff" || s == "inff")
        return true;

    if (s.length() < 2 || s[s.length() - 1] != 'f')
        return false;

    size_t start = 0;
    if (s[0] == '+' || s[0] == '-')
        start = 1;

    int dots = 0;
    for (size_t i = start; i < s.length() - 1; ++i)
    {
        if (s[i] == '.')
        {
            dots++;
            if (dots > 1)
                return false;
        }
        else if (!isdigit(s[i]))
            return false;
    }

    return dots == 1;
}

bool isDouble(std::string s)
{
	if (s == "nan" || s == "+inf" || s == "-inf" || s == "inf")
		return true;

	size_t start = 0;
	if (s[0] == '+' || s[0] == '-')
		start = 1;
		
	int dots = 0;
	for (size_t i = start; i < s.length() - 1; ++i)
	{
		if (s[i] == '.')
		{
			dots++;
			if (dots > 1)
				return false;
		}
		else if (!isdigit(s[i]))
			return false;
	}

	return dots == 1;
}

void convertChar(char c)
{
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void convertInt(int i)
{
    std::cout << "char: ";
    if (i >= 32 && i <= 126)
        std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void convertFloat(float f)
{
    std::cout << "char: ";
    if (std::isnan(f) || std::isinf(f))
        std::cout << "impossible" << std::endl;
    else if (f >= 32 && f <= 126 && static_cast<int>(f) == f)
        std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
    else if (f < 32 || f > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "impossible" << std::endl;

    std::cout << "int: ";
    if (std::isnan(f) || std::isinf(f) || f > INT_MAX || f < INT_MIN)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(f) << std::endl;

    std::cout << "float: " << f;
    if (f == static_cast<int>(f) && !std::isnan(f) && !std::isinf(f))
        std::cout << ".0";
    std::cout << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(f);
    if (f == static_cast<int>(f) && !std::isnan(f) && !std::isinf(f))
        std::cout << ".0" << std::endl;
}

void convertDouble(double d)
{
    std::cout << "char: ";
    if (std::isnan(d) || std::isinf(d))
        std::cout << "impossible";
    else if (d >= 32 && d <= 126 && static_cast<int>(d) == d)
        std::cout << "'" << static_cast<char>(d) << "'";
    else if (d < 32 || d > 126)
        std::cout << "Non displayable";
    else
        std::cout << "impossible";
    std::cout << std::endl;

    std::cout << "int: ";
    if (std::isnan(d) || std::isinf(d) || d > INT_MAX || d < INT_MIN)
        std::cout << "impossible";
    else
        std::cout << static_cast<int>(d);
    std::cout << std::endl;

    std::cout << "float: " << static_cast<float>(d);
    if (d == static_cast<int>(d) && !std::isnan(d) && !std::isinf(d))
        std::cout << ".0";
    std::cout << "f" << std::endl;
    std::cout << "double: " << d;
    if (d == static_cast<int>(d) && !std::isnan(d) && !std::isinf(d))
        std::cout << ".0";
    std::cout << std::endl;
}

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    (void)other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    return *this;
}

void ScalarConverter::convert(std::string literal)
{
    if (literal.empty())
        return;
    if (isChar(literal))
        convertChar(literal[0]);
    else if (isInt(literal))
        convertInt(atoi(literal.c_str()));
    else if (isFloat(literal))
        convertFloat(static_cast<float>(atof(literal.c_str())));
    else if (isDouble(literal))
        convertDouble(atof(literal.c_str()));
    else
        std::cout << "invalid input" << std::endl;
}

ScalarConverter::~ScalarConverter() {}
