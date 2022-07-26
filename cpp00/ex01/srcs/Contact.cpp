/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:40:48 by seungsle          #+#    #+#             */
/*   Updated: 2022/07/26 14:28:36 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Contact.hpp"

void	Contact::add_contact(std::string firstName, std::string lastName, \
								std::string nickName, std::string phoneNumber, \
								std::string darkestSecret, int index)
{
	_firstName = firstName;
	_lastName = lastName;
	_nickName = nickName;
	_phoneNumber = phoneNumber;
	_darkestSecret = darkestSecret;
	_index = index;
}

std::string	Contact::substr_info(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

void	Contact::display_contact()
{
	std::cout << "|" << std::setw(10) << _index;
	std::cout << "|" << std::setw(10) << substr_info(_firstName);
	std::cout << "|" << std::setw(10) << substr_info(_lastName);
	std::cout << "|" << std::setw(10) << substr_info(_nickName) << "|" << std::endl;
}

Contact::Contact()
{
}

Contact::~Contact()
{
}