/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 13:13:28 by wkonings      #+#    #+#                 */
/*   Updated: 2023/06/05 20:03:49 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add_contact(const Contact &contact)
{
	contacts[num_contacts++ % MAX_CONTACTS] = contact;
}

void PhoneBook::search(void)
{
	std::string str;
	int index;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
	for (int i = 0; i < this->num_contacts && i < MAX_CONTACTS; i++)
		this->contacts[i].preview(i);
	get_input("Select an index you want to display: ", &str);
	try
	{
		index = std::stoi(str, nullptr);
	}
	catch (std::invalid_argument)
	{
		std::cout << "Error: Only numeric arguments." << std::endl; 
		return ;
	}
	catch (std::out_of_range) 
	{
		std::cout << "Error: Index out of range." << std::endl;
		return ;
	}
	if (index >= 0 && index < this->num_contacts && index < MAX_CONTACTS) 
		this->contacts[index].display();
	else
		std::cout << "Error: Non-existant index." << std::endl;
}

PhoneBook::PhoneBook(void): num_contacts(0)
{
	
}

PhoneBook::~PhoneBook(void)
{
	
}