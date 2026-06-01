/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 22:29:20 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/06/01 21:55:55 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &other)
{
	_stack = other._stack;
}

RPN &RPN::operator=(const RPN &other)
{
	if (this != &other)
	{
		_stack = other._stack;
	}
	return *this;
}

std::stack<int> RPN::getStack() const { return _stack; }

void RPN::parseExpression(const std::string &exp)
{
	int size = 0;

	for (size_t i = 0; i < exp.length(); i++)
	{
		char c = exp[i];
		if (c == ' ')
			continue;
		else if (isdigit(c))
		{
			if (i + 1 < exp.length() && exp[i + 1] != ' ')
				throw std::exception();
			size++;
		}
		else if (c == '+' || c == '*' || c == '-' || c == '/')
		{
			if (size < 2)
				throw std::exception();
			if (i + 1 < exp.length() && exp[i + 1] != ' ')
				throw std::exception();
			size--;
		}
		else
			throw std::exception();
	}

	if (size != 1)
		throw std::exception();
}

void RPN::executeExpression(const std::string &exp)
{
	parseExpression(exp);

	for (size_t i = 0; i < exp.length(); i++)
	{
		char c = exp[i];
		if (c == ' ')
			continue;
		else if (isdigit(c))
			_stack.push(c - '0');
		else if (c == '+' || c == '*' || c == '-' || c == '/')
		{
			int right = _stack.top();
			_stack.pop();
			int left = _stack.top();
			_stack.pop();

			if(c == '+')
				_stack.push(left + right);
			else if (c == '*')
				_stack.push(left * right);
			else if (c == '-')
				_stack.push(left - right);
			else if (c == '/')
			{
				if (right == 0)
					throw std::exception();
				_stack.push(left / right);
			}
		}
	}
}

RPN::~RPN() {}
