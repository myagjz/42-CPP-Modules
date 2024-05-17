/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 20:31:40 by myagiz            #+#    #+#             */
/*   Updated: 2024/05/17 22:50:56 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <exception>
# include <cctype>
# include <string>
# include <vector>
# include <map>

class BitcoinExchange {
	private :
		std::map <std::string, float> data;
		std::string path;
		void fillData();
		void printMap();
		void checkBalance();
		float checkDate(std::string date);
		std::map<std::string, float>::iterator findNearestDate(int year, int month, int day);

	public :
		BitcoinExchange();
		BitcoinExchange(std::string pathcsv);
		BitcoinExchange(BitcoinExchange const &src);
		BitcoinExchange &operator=(BitcoinExchange const &rhs);
		~BitcoinExchange();

		void func();

		std::string getPath() const;
};

#endif
