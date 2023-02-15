/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 13:13:31 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/15 13:27:18 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include "Contact.hpp"
# define MAX_CONTACTS 8

class PhoneBook {
	public:

		PhoneBook(void);
		~PhoneBook(void);
		void add_contact(const Contact &contact);
		void search(void);

	private:

		Contact contacts[MAX_CONTACTS];
		int num_contacts;
};


void	get_input(std::string prompt, std::string *str);
// void	get_input(std::string *str);

#endif
