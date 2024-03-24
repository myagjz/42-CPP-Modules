/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:40:56 by myagiz            #+#    #+#             */
/*   Updated: 2024/03/24 17:40:57 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <stack>
#include <exception>
#include <stdexcept>

class	RPN
{
	private :
		RPN(const RPN &obj);
		RPN &operator=(const RPN &obj);
		std::stack<int>	_rpnStack;
		int				_operatorCnt;

		bool			isOperator(char c);
		int				operate(int rightValue, int leftValue, char anOperator);
	public :
		RPN();
		~RPN();

		void	calculate(std::string argv);
		void	printResult();
};
