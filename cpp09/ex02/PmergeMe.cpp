/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pmergeme.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/19 13:21:51 by wkonings      #+#    #+#                 */
/*   Updated: 2023/07/19 13:24:15 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


PmergeMe::PmergeMe(void)
{
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
	if (this != &src)
		*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PmergeMe::~PmergeMe(void)
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PmergeMe &PmergeMe::operator=(PmergeMe const &src)
{
	if (this == &src)
		return (*this);
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

uint64_t PmergeMe::get_time_in_microseconds()
{
	return (std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now().time_since_epoch()).count());
}

template <template <typename...> class Container, typename T>
void merge(Container<T> &arr, size_t left, size_t middle, size_t right) {
	size_t i = left;
	size_t j = middle + 1;

	while (i <= middle && j <= right)
	{
		if (arr[i] <= arr[j])
			i++;
		else
		{
			T temp = arr[j];
			std::move_backward(arr.begin() + i, arr.begin() + j, arr.begin() + j + 1);
			arr[i] = temp;
			middle++;
			j++;
		}
	}
}

template <template <typename...> class Container, typename T>
void insertion_sort(Container<T> &arr, size_t left, size_t right)
{
	for (size_t i = left + 1; i <= right; ++i)
	{
		T tmp = arr[i];
		size_t j = i - 1;
		while (j >= left && j < right && arr[j] > tmp)
		{
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = tmp;
	}
}

template <template <typename...> class Container, typename T>
void merge_sort(Container<T>& arr, size_t left, size_t right)
{
	if (left >= right)
		return;

	if (right - left < INSERTION_SORT_THRESHOLD)
	{
		insertion_sort(arr, left, right);
		return;
	}

	size_t middle = left + (right - left) / 2;
	merge_sort(arr, left, middle);
	merge_sort(arr, middle + 1, right);
	merge(arr, left, middle, right);
}

template <template <typename...> class Container, typename T>
void merge_sort(Container<T>& arr)
{
	 merge_sort(arr, 0, arr.size() - 1);
}

template <template <typename...> class Container, typename T>
static Container<T> make_container(char **av)
{
	Container<T> input;

	for (size_t i = 1; av[i]; i++)
		input.push_back(static_cast<T>(std::atof(av[i])));	
	return (input);
}

void PmergeMe::bench(size_t elements, char **av)
{
	uint64_t start_time1 = get_time_in_microseconds();
	std::vector<int> container1 = make_container<std::vector, int>(av);
	merge_sort(container1);
	uint64_t end_time1 = get_time_in_microseconds();

	uint64_t start_time2 = get_time_in_microseconds();
	std::deque<int> container2 = make_container<std::deque, int>(av);
	merge_sort(container2);
	uint64_t end_time2 = get_time_in_microseconds();

	std::vector<int> unsorted_container = make_container<std::vector, int>(av);

	std::cout << "Before: ";
	for (const auto &elem : unsorted_container)
		std::cout << elem << " ";
	std::cout << std::endl << "After:  ";
	for (const auto &elem : container1)
		std::cout << elem << " ";
	std::cout << std::endl;

	std::cout << "Time to process a range of " << elements << " elements with std::vector : " << (end_time1 - start_time1) << " us" << std::endl;
	std::cout << "Time to process a range of " << elements << " elements with std::deque : " << (end_time2 - start_time2) << " us" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */