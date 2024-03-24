/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:39:51 by myagiz            #+#    #+#             */
/*   Updated: 2024/03/24 17:39:52 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string infileName)
{
	_infileStream.open(infileName.c_str());
	if (!_infileStream.is_open())
		throw fileOpenException();
	_infileName = infileName;
	_csvFileName = "data.csv";

	readCsvFile();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
	*this = obj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
	(void)obj;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

const char	*BitcoinExchange::fileOpenException::what() const throw()
{
	return ("Error: cant't open infile");
}

void	BitcoinExchange::readCsvFile()
{
	std::string	line;

	_csvFileStream.open(_csvFileName.c_str());
	if (!_csvFileStream.is_open())
		throw fileOpenException();
	std::getline(_csvFileStream, line);
	while (!_csvFileStream.eof())
	{
		std::getline(_csvFileStream, line);
		if (isOnlyWhitespace(line) == true)
			continue ;
		std::istringstream	iss(line);
		std::string	sYear;
		std::string	sMonth;
		std::string	sDay;
		std::string	sRate;
		int			iDate;
		float		fRate;

		std::getline(iss, sYear, '-');
		std::getline(iss, sMonth, '-');
		std::getline(iss, sDay, ',');
		std::getline(iss, sRate);
		iDate = sDatetoiDate(sYear, sMonth, sDay);
		fRate = static_cast<float>(std::strtod(sRate.c_str(), NULL));
		_csvMap[iDate] = fRate;
	}
	_csvFileStream.close();
}

int	BitcoinExchange::sDatetoiDate(std::string sYear, std::string sMonth, std::string sDay)
{
	int	year;
	int	month;
	int day;
	int	convertedDate;

	year = static_cast<int>(std::strtod(sYear.c_str(), NULL));
	month = static_cast<int>(std::strtod(sMonth.c_str(), NULL));
	day = static_cast<int>(std::strtod(sDay.c_str(), NULL));
	convertedDate = (year * 10000) + (month * 100) + day;
	return (convertedDate);
}

void	BitcoinExchange::readInputFile()
{
	std::string	line;
	int			cnt;

	cnt = 0;
	while (std::getline(_infileStream, line))
	{
		if (line == "date | value" && cnt == 0)
		{
			cnt++;
			continue ;
		}
		if (isOnlyWhitespace(line) == true)
		{
			continue ;
		}
		else if (isRightForm(line) == false)
		{
			std::cout << "Error : bad input => " << line << std::endl;
		}
		else if (isValidDate() == false)
		{
			std::cout << "Error : invalid date => " << _sDate << std::endl;
		}
		else if (_fRate < 0)
		{
			std::cout << "Error : not a poistive number" << std::endl;
		}
		else if (_fRate > 1000)
		{
			std::cout << "Error : too large a number" << std::endl;
		}
		else
			displayResult();
		cnt++;
	}
}

void	BitcoinExchange::displayResult()
{

	std::map<int, float>::iterator it = _csvMap.lower_bound(_iDate);
	if (it->first != _iDate)
	{
		if (it == _csvMap.begin())
		{
			std::cout << "Error: no date matched" << std::endl;
			return ;
		}
		it--;
	}
	std::cout << _sDate << " => " << _fRate << " = " << _fRate * it->second << std::endl;
}

//-----------------------utils
bool	BitcoinExchange::isOnlyWhitespace(std::string stdstr)
{
	for (size_t i = 0; i < stdstr.length(); i++)
	{
		if (!((stdstr[i] >= 9 && stdstr[i] <= 13) || stdstr[i] == 32))
			return (false);
	}
	return (true);
}

bool	BitcoinExchange::isRightForm(std::string line)
{
	std::string	date;
	std::string	seperator;
	std::string	rate;

	if (line.length() <= 12)
		return (false);
	date = line.substr(0, 10);
	seperator = line.substr(10, 3);
	rate = line.substr(13, line.length());

	if (date[4] != '-' || date[7] != '-')
		return (false);

	if (seperator != " | ")
		return (false);

	std::istringstream	iss(rate);
	float				fRate;
	iss >> fRate;
	if (iss.fail() || !iss.eof())
		return (false);

	_sDate = date;
	_fRate = fRate;
	return (true);
}

bool	BitcoinExchange::isValidDate()
{
	int	year;
	int	month;
	int	day;

	year = static_cast<int>(strtod((_sDate.substr(0, 4)).c_str(), NULL));
	month = static_cast<int>(strtod((_sDate.substr(5, 2)).c_str(), NULL));
	day = static_cast<int>(strtod((_sDate.substr(8, 2)).c_str(), NULL));

	if (year <= 0 || month <= 0 || month > 12 || day <= 0)
		return (false);
	if (month == 2)
	{
		if (isLeapYear(year) && day > 29)
			return (false);
		if (!isLeapYear(year) && day > 28)
			return (false);
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day > 30)
			return (false);
	}
	else
	{
		if (day > 31)
			return (false);
	}
	_iDate = year * 10000 + month * 100 + day;
	return (true);
}

bool	BitcoinExchange::isLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return (true); // leaf year
	else
		return (false); // not leaf year
}
