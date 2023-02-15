/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 12:57:52 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/15 13:21:19 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>

class Contact {
	public:

		Contact(void);
		~Contact();
		void create_contact(void);
		void display(void);
		void preview(int i);
		
	private:

		std::string _format(std::string str);
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

void	get_input(std::string prompt, std::string *str);
// void	get_input(std::string *str);

#endif