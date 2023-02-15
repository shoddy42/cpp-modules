/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 12:57:58 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/15 13:22:19 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::create_contact(void)
{
	while (this->first_name.empty())
		get_input("Enter first name: ", &this->first_name);
	while (this->last_name.empty())
		get_input("Enter last name: ", &this->last_name);
	while (this->nickname.empty())
		get_input("Enter nickname: ", &this->nickname);
	while (this->phone_number.empty())
		get_input("Enter phone number: ", &this->phone_number);
	while (this->darkest_secret.empty())
		get_input("Enter darkest secret: ", &this->darkest_secret);
}

void	Contact::display(void)
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;	
}

std::string Contact::_format(std::string str)
{
	if (str.length() < 10)
		return (str);
	return (str.substr(0, 9) + ".");
}

void Contact::preview(int i)
{
	std::cout.width(10);
	std::cout << i << "|";
	std::cout.width(10);
	std::cout << this->_format(this->first_name) << "|";
	std::cout.width(10);
	std::cout << this->_format(this->last_name) << "|";
	std::cout.width(10);
	std::cout << this->_format(this->nickname) << std::endl;	
}

Contact::Contact(void)
{
	
}

Contact::~Contact(void)
{
	
}
