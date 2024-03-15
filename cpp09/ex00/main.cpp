/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/11 19:18:37 by wkonings      #+#    #+#                 */
/*   Updated: 2023/07/19 13:28:28 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	BitcoinExchange btc;
	(void)av;
	if (ac != 2)
	{
		std::cerr << "usage: ./btc <data.csv>" << std::endl;
		return (1);
	}
	btc.fill_database();
	btc.exchange(std::string(av[1]));
}