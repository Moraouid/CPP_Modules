/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 22:22:14 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/06/01 19:52:48 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <exception>
#include <stack>

class RPN
{
private:
	std::stack<int> _stack;
	void parseExpression(const std::string &exp);

public:
	RPN();
	RPN(const RPN &other);
	RPN &operator=(const RPN &other);
	
	std::stack<int> getStack() const;
	void executeExpression(const std::string &exp);

	~RPN();
};

#endif