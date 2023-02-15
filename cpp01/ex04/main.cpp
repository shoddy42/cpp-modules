/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 06:50:05 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/10 08:33:53 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "bad" << std::endl;
		return (1);
	}

	std::ifstream infile;
	infile.open(av[1]);
	if (!infile.is_open())
	{
		std::cout << "Failed to open infile " << av[1] << std::endl;
		return (1);
	}

	std::ofstream outfile;
	outfile.open(std::string(av[1]) + ".replace", std::ios::out | std::ios::trunc);
	if (!outfile.is_open())
	{
		std::cout << "Failed to open new infile " << av[1] << ".replace" << std::endl;
		return (1);
	}

	std::string line;
	size_t i, start;
	size_t replace_len = std::string(av[3]).length();
	size_t target_len = std::string(av[2]).length();
	while (std::getline(infile, line))
	{
		i = 0;
		start = 0;
		i = line.find(av[2], i);
		while (i != std::string::npos)
		{
			std::string before = line.substr(0, i);
			std::string after = line.substr(i + target_len);
			line = before + av[3] + after;
			i = line.find(av[2], i + replace_len);
		}
		if (infile.eof())
			outfile << line;
		else
			outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}