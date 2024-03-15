/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/19 13:21:59 by wkonings      #+#    #+#                 */
/*   Updated: 2023/08/03 00:33:14 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */



#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <fstream>
# include <string>
# include <vector>
# include <deque> 
// # include <algorithm>
// # include <list>
# include <chrono>
# include <ctime>
# include <cstdlib>

# include <unistd.h> //remove 
//todo: choose between deque and list, deque probably easier

class PmergeMe
{
	public:
		PmergeMe(void);
		PmergeMe(const PmergeMe &src);
		~PmergeMe(void);
		PmergeMe &operator=(PmergeMe const &src);
		uint64_t get_time_ms(void);
		
		// void	do_math(char operation);
		
	private:

};


#endif /* ********************************************* MUTATED_STACK_HPP */
