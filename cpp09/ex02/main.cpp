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
// #include <algorithm>

//todo: clean up the code
//todo: add timer

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Usage: ./PmergeMe (sequence of numbers)" << std::endl;
        exit(1);
    }

    PmergeMe pmerge;

    pmerge.run(ac, av);
    return 0;
}