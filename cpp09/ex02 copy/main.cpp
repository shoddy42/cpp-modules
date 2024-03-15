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

template <typename T>
std::deque<T> merge(const std::deque<T> &left, const std::deque<T> &right)
{
    std::deque<T> result;
    size_t leftIndex = 0;
    size_t rightIndex = 0;

    while (leftIndex < left.size() && rightIndex < right.size())
	{
        if (left[leftIndex] < right[rightIndex])
		{
            result.push_back(left[leftIndex]);
            leftIndex++;
        } 
		else
		{
            result.push_back(right[rightIndex]);
            rightIndex++;
        }
    }
    while (leftIndex < left.size())
	{
        result.push_back(left[leftIndex]);
        leftIndex++;
    }
    while (rightIndex < right.size())
	{
        result.push_back(right[rightIndex]);
        rightIndex++;
    }
    return (result);
}

template <typename T>
std::deque<T> mergeSort(const std::deque<T> &vec)
{
    if (vec.size() <= 1)
        return (vec);

    size_t middle = vec.size() / 2;
    std::deque<T> left(vec.begin(), vec.begin() + middle);
    std::deque<T> right(vec.begin() + middle, vec.end());
	
	return (merge(mergeSort(left), mergeSort(right)));
}


template <typename T>
std::vector<T> merge(const std::vector<T> &left, const std::vector<T> &right)
{
    std::vector<T> result;
    size_t leftIndex = 0;
    size_t rightIndex = 0;

    while (leftIndex < left.size() && rightIndex < right.size())
	{
        if (left[leftIndex] < right[rightIndex])
		{
            result.push_back(left[leftIndex]);
            leftIndex++;
        } 
		else
		{
            result.push_back(right[rightIndex]);
            rightIndex++;
        }
    }
    while (leftIndex < left.size())
	{
        result.push_back(left[leftIndex]);
        leftIndex++;
    }
    while (rightIndex < right.size())
	{
        result.push_back(right[rightIndex]);
        rightIndex++;
    }
    return (result);
}

template <typename T>
std::vector<T> mergeSort(const std::vector<T> &vec)
{
    if (vec.size() <= 1)
        return (vec);

    size_t middle = vec.size() / 2;
    std::vector<T> left(vec.begin(), vec.begin() + middle);
    std::vector<T> right(vec.begin() + middle, vec.end());
	
	return (merge(mergeSort(left), mergeSort(right)));
}

std::vector<int> makeVector(char **av)
{
	std::vector<int> input;

	for (size_t i = 1; av[i]; i++)
		input.push_back(std::atoi(av[i]));
	return (input);
}

std::deque<int> makeDeque(char **av)
{
	std::deque<int> input;

	for (size_t i = 1; av[i]; i++)
		input.push_back(std::atoi(av[i]));
	return (input);
}


//todo: filter bad input
//todo: main cleanup, move functions so class
int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Usage: ./PmergeMe (sequence of numbers)" << std::endl;
		exit(1);
	}
	// std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<std::chrono::milliseconds> time = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now());
	// std::chrono::milliseconds time
	uint64_t time = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
	std::vector<int> unsortedVec = makeVector(av);
    std::vector<int> sortedVec = mergeSort(unsortedVec);
	uint64_t time2 = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
	
	uint64_t dqtime = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
	std::deque<int> unsortedDeq = makeDeque(av);
    std::deque<int> sortedDeq = mergeSort(unsortedDeq);
	uint64_t dqtime2 = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

    std::cout << "Before: ";
    for (std::vector<int>::const_iterator it = unsortedVec.begin(); it != unsortedVec.end(); ++it) 
        std::cout << *it << " ";

    std::cout << std::endl << "After:  ";
    for (std::vector<int>::const_iterator it = sortedVec.begin(); it != sortedVec.end(); ++it)
        std::cout << *it << " ";
	

    std::cout << std::endl;
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << (time2 - time) << " us" << std::endl;
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << (dqtime2 - dqtime) << " us" << std::endl;
    return (0);
}