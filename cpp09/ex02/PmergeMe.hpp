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
# include <algorithm>
# include <chrono>
# include <ctime>
# include <cstdlib>

# include <vector>
# include <deque> 
# define INSERTION_SORT_THRESHOLD 2

class PmergeMe
{
	public:
		PmergeMe(void);
		~PmergeMe(void);
		void bench(size_t elements, char **av);
		
	private:
		PmergeMe &operator=(PmergeMe const &src);
		uint64_t get_time_in_microseconds(void);
		PmergeMe(const PmergeMe &src);

};

#endif
