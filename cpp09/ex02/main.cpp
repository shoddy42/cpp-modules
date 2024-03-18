/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/11 19:18:37 by wkonings      #+#    #+#                 */
/*   Updated: 2023/08/03 00:32:29 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool check_validity(std::string input)
{
	size_t i = 0;
	bool has_precision = false;
	if (input[0] == '-')
		i++;
	while (input[i])
	{
		if (!std::isdigit(input[i]) && input[i] != ' ')
		{
			if (input[i] == '.' && has_precision == false && i + 1 < input.size())
				has_precision = true;
			else
			{
				std::cout << "Error: Bad input!: [" << input << "] bad character: " << input[i] << std::endl;
				return (false);
			}
		}
		i++;
	}
	return (true);
}

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Usage: ./PmergeMe (sequence of numbers)" << std::endl;
		exit(1);
	}
	for (int i = 1; i < ac; ++i)
		if (check_validity(av[i]) == false)
			return (1);


	PmergeMe pmerge;
	pmerge.bench(ac - 1, av);
	return (0);
}