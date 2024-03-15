/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/11 19:12:22 by wkonings      #+#    #+#                 */
/*   Updated: 2023/07/19 12:00:13 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <map>
# include <iostream>
# include <iomanip>
# include <fstream>
# include <string>
# include <cstdlib>

class BitcoinExchange
{
	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &src);
		~BitcoinExchange(void);
		BitcoinExchange &operator=(BitcoinExchange const &src);
		void	fill_database(void);
		void	exchange(std::string filename);
		bool	validate_input(std::string date);
		void	validate_database(std::string date);
		
	private:
		std::map<std::string, float> database;
};


#endif
