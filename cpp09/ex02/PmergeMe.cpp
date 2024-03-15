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


// Utility function to get current time in milliseconds
uint64_t PmergeMe::get_time_ms()
{
    return (std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch()).count());
}

template <template <typename...> class Container, typename T>
void merge(Container<T>& arr, size_t left, size_t middle, size_t right) {
    size_t i = left;
    size_t j = middle + 1;

    while (i <= middle && j <= right) {
        if (arr[i] <= arr[j]) {
            i++;
        } else {
            T temp = std::move(arr[j]);
            std::move_backward(arr.begin() + i, arr.begin() + j, arr.begin() + j + 1);
            arr[i] = std::move(temp);
            j++;
            middle++;
        }
    }
}

template <template <typename...> class Container, typename T>
void merge_sort(Container<T>& arr, size_t left, size_t right) {
    if (left >= right) return;

    size_t middle = left + (right - left) / 2;
    merge_sort(arr, left, middle);
    merge_sort(arr, middle + 1, right);
    merge(arr, left, middle, right);
}

template <template <typename...> class Container, typename T>
void merge_sort(Container<T>& arr) {
     merge_sort(arr, 0, arr.size() - 1);
}


template <template <typename...> class Container, typename T>
static Container<T> make_container(char **av)
{
    Container<T> input;

    for (size_t i = 1; av[i]; i++)
        input.push_back(static_cast<T>(std::atoi(av[i])));
    return input;
}

void PmergeMe::run(int ac, char **av)
{
    uint64_t time = get_time_ms();
    std::vector<int> vec = make_container<std::vector, int>(av);
    std::vector<int> unsorted_vec = vec;
    // std::vector<int> sortedVec = merge_sort<std::vector, int>(unsortedVec);
    merge_sort(vec);
    uint64_t time2 = get_time_ms();

    uint64_t dqtime = get_time_ms();
    std::deque<int> deq = make_container<std::deque, int>(av);
    std::deque<int> unsorted_deq = make_container<std::deque, int>(av);
    // std::deque<int> sortedDeq = merge_sort<std::deque, int>(unsortedDeq);
    merge_sort(deq);
    uint64_t dqtime2 = get_time_ms();

	 std::cout << "Before: ";
    for (const auto &elem : unsorted_vec)
        std::cout << elem << " ";
    std::cout << std::endl << "After:  ";
    for (const auto &elem : vec)
        std::cout << elem << " ";
    std::cout << std::endl;
    std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << (time2 - time) << " us" << std::endl;
    std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << (dqtime2 - dqtime) << " us" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */