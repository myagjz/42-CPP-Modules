/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:41:55 by myagiz            #+#    #+#             */
/*   Updated: 2024/05/15 15:41:56 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
# define MutantStack_HPP

# include <stack>
# include <vector>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(){};

		MutantStack(MutantStack const &other) {
			*this = other;
		}

		MutantStack &operator=(MutantStack const &other) {
			(void)other;
			return *this;
		}

		~MutantStack(){};

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {
			return std::stack<T>::c.begin();
		}

		iterator end() {
			return std::stack<T>::c.end();
		}
};

#endif
