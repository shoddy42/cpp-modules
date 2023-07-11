/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/11 19:12:22 by wkonings      #+#    #+#                 */
/*   Updated: 2023/07/11 21:42:03 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <map>
# include <iostream>
# include <string>

class BitcoinExchange
{
	public:
		BitcoinExchange (void);
		// BitcoinExchange<T>(unsigned int n) { return; };
		~BitcoinExchange (void);
		std::map<std::string, float> database;
	private:
		unsigned int 		_capacity;
};

#endif /* ********************************************* MUTATED_STACK_HPP */
