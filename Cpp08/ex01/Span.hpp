/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:39:17 by myagiz            #+#    #+#             */
/*   Updated: 2024/03/24 17:39:18 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <cstdlib>

class	Span
{
	private :
		std::vector<int>	_v;
		unsigned int		N;
	public :
		Span();
		Span(unsigned int N);
		Span(const Span &obj);
		Span &operator=(const Span &obj);
		~Span();
		class	spanExistException : public std::exception
		{
			public :
				const char	*what(void) const throw();
		};
		class	spanFullException : public std::exception
		{
			public :
				const char	*what(void) const throw();
		};

		void			addNumber(int n);
		void			addNumbers(std::vector<int> v);
		long long		shortestSpan();
		long long		longestSpan();
		void			printAllElement();
};
