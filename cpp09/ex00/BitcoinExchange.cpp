/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/11 21:42:41 by wkonings      #+#    #+#                 */
/*   Updated: 2023/07/19 12:22:57 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

//todo: check leaks. check if data.csv is fully correct. write more input.txts
//todo: actually make the copy constructor copy?

BitcoinExchange::BitcoinExchange(void)
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	if (this != &src)
		*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

BitcoinExchange::~BitcoinExchange(void)
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &src)
{
	if (this == &src)
		return (*this);
	database.clear();
	for (const std::pair<const std::string, float> &entry : src.database)
		database[entry.first] = entry.second;
	return (*this);
}


/*
** --------------------------------- METHODS ----------------------------------
*/


void	BitcoinExchange::fill_database(void)
{
	std::ifstream file("data.csv");
	if (file.fail())
	{
		std::cerr << "Error: failed to open data.csv" << std::endl;
		exit(1);
	}
	std::string line;
	std::getline(file, line);
	if (line != "date,exchange_rate")
	{
		std::cerr << "Error: bad header in database" << std::endl;	
		exit (1);
	}
	while (std::getline(file, line))
	{
		validate_database(line);
		std::string date = line.substr(0, line.find(','));
		std::string	value = line.substr(line.find(',') + 1, line.length());
		database.insert(std::make_pair(date, std::atof(value.c_str())));
	}
}

void	BitcoinExchange::validate_database(std::string date)
{
	bool	valid = true;
	int		year = std::atoi(date.c_str());
	int		month = std::atoi(date.c_str() + 5);
	int		day = std::atoi(date.c_str() + 8);

	if (date.find_last_of(',') == std::string::npos || !std::isdigit(date[date.find(',') + 1]))
		valid = false;
	if (year < 2009 || year > 9999 || month < 1 || month > 12 || day < 1 || day > 31 || date.length() < 12)
		valid = false;
	for (size_t i = 0; i < date.length(); i++)
		if (!std::isdigit(date[i]) && date[i] != '.' && date[i] != '-' && date[i] != ',')
			valid = false;
	if (valid == false)
	{
		std::cerr << "Error: error in database [" << date << "]" << std::endl;
		exit (1);
	}
}

bool	BitcoinExchange::validate_input(std::string date)
{
	bool	valid = true;
	int		year = std::atoi(date.c_str());
	int		month = std::atoi(date.c_str() + 5);
	int		day = std::atoi(date.c_str() + 8);
	
	if (year < 2009 || year > 9999 || month < 1 || month > 12 || day < 1 || day > 31)
		valid = false;
	if (date.find(" | ", 0) == std::string::npos)
		valid = false;
	for (size_t i = 0; i < date.length(); i++)
		if (!std::isdigit(date[i]) && date[i] != '.' && date[i] != '-' && date[i] != ' ' && date[i] != '|')
			valid = false;
	if (valid == false)
		std::cerr << "Error: bad input [" << date << "]" << std::endl;
	return (valid);
}

void	BitcoinExchange::exchange(std::string filename)
{
	if (filename.length() < 5 || filename.substr(filename.length() - 4) != ".csv")
	{
		std::cerr << "Error: not a .csv file! [" << filename << "]" << std::endl;
		exit(1);
	}
	std::ifstream file(filename.c_str());
	if (file.fail())
	{
		std::cerr << "Error: failed to open [" << filename << "]" << std::endl;
		exit(1);
	}
	
	std::string line;
	std::getline(file, line);
	if (line != "date | value")
	{
		std::cerr << "Error: invalid header" << std::endl;
		exit(1);
	}

	while (std::getline(file, line))
	{
		std::string date = line.substr(0, 10);
		if (!validate_input(line))
			continue;
		std::map<std::string, float>::iterator i;
		i = database.upper_bound(date);
		if (i->first != date)
			i--;
		std::string str_value = line.substr(line.find_last_of(' ') + 1, line.length());
		float value = std::atof(str_value.c_str());
		if (value <= 0)
			std::cerr << "Error: not a positive number. [" << line << "]" << std::endl;
		else if (value > 1000)
			std::cerr << "Error: too large a number. [" << line << "]" << std::endl;
		else
			std::cout << date << " => " << value << " = " << i->second * value << std::endl;
	}
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */