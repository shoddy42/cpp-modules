/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 11:34:35 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/14 15:31:13 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#define	NO_ARGS "\33[38;5;196m * LOUD AND UNBEARABLE FEEDBACK NOISE *\33[0m"

// sadly illegal code that would be much better.
// std::transform(message.begin(), message.end(), message.begin(), ::toupper);
std::string	ftpp_toupper(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
	return (str);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << NO_ARGS << std::endl ;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		std::string message = ftpp_toupper(av[i]);
		message.erase(0, message.find_first_not_of(" ")); //remove starting spaces
        message.erase(message.find_last_not_of(" ") + 1); //remove trailing spaces
		std::cout << message << " ";
	}
	std::cout << std::endl;
	return (0);
}
