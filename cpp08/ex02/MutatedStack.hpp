/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutatedStack.hpp 		                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 18:42:23 by wkonings      #+#    #+#                 */
/*   Updated: 2023/05/02 15:24:28 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTATEDSTACK_HPP
# define MUTATEDSTACK_HPP
# include <stack>

// typename T::iterator easyfind(T &container, int value)
template <typename T>
class MutatedStack: public std::stack<T>
{
	public:
		MutatedStack<T>(void) { return; };
		// MutatedStack<T>(unsigned int n) { return; };
		~MutatedStack<T>(void) { return; };

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(void) { return (this->c.begin()); };
		iterator end(void) { return (this->c.end()); };
		// size_t end(void) { return (static_cast<size_t>(this->c.end())); };

	private:
		unsigned int 		_capacity;
};

#endif /* ********************************************* MUTATED_STACK_HPP */
