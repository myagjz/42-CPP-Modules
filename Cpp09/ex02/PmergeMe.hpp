/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 20:33:04 by myagiz            #+#    #+#             */
/*   Updated: 2024/05/26 18:34:21 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <ctime>

class PmergeMe {
	private:
		std::vector<int> _vector;
		std::deque<int> _deque;

	public:
		PmergeMe();
		~PmergeMe();
		int start(int argc, char **argv);
		void sort(std::vector<int> & bar);
		void mergeSort(std::vector<int>&left, std::vector<int>& right, std::vector<int>& bars);
		void sort2(std::deque<int> & bar);
		void mergeSort2(std::deque<int>&left, std::deque<int>& right, std::deque<int>& bars);
		void process();
		void print_values();
};

#endif
