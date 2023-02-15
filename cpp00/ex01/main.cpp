/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 13:02:51 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/15 13:24:10 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

// void	get_input(std::string *str)
// {
// 	std::getline(std::cin, *str);
// 	if (std::cin.eof())
// 		exit (1);
// }

void	get_input(std::string prompt, std::string *str)
{
	std::cout << prompt;
	std::getline(std::cin, *str);
	if (std::cin.eof())
		exit (1);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string command;

	while (42)
	{
		get_input("Enter a command (ADD, SEARCH, EXIT): ", &command);
		if (command == "ADD")
		{
			Contact new_contact;
			new_contact.create_contact();
			phonebook.add_contact(new_contact);
		} 
		else if (command == "SEARCH")
			phonebook.search();
		else if (command == "EXIT")
		{
			std::cout << "Exiting phonebook." << std::endl;
			return (0);
		}
	}
	return (0);
}
