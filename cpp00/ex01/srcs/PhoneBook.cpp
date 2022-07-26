/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:40:50 by seungsle          #+#    #+#             */
/*   Updated: 2022/07/26 14:29:33 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PhoneBook.hpp"

void	PhoneBook::add_contacts()
{
	_contacts[_size % 8] = Contact();

	for (int i = firstName; i <= darkestSecret; i++)
	{
		if (i == firstName)
			std::cout << "first name : ";
		else if (i == lastName)
			std::cout << "last name : ";
		else if (i == nickName)
			std::cout << "nick name : ";
		else if (i == phoneNumber)
			std::cout << "phone number : ";
		else if (i == darkestSecret)
			std::cout << "darkest secret : ";
		std::cin >> _info[i];
		std::cout << std::endl;
	}
	_contacts[_size % 8].add_contact(_info[0], _info[1], _info[2], _info[3], \
										_info[4], _size % MAX_CAPACITY);
	_size++;
}

void	PhoneBook::display_prompt()
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < _size && i < MAX_CAPACITY; i++)
		_contacts[i].display_contact();
	std::cout << "|-------------------------------------------|" << std::endl;
}

void	PhoneBook::search_contact()
{
	std::string cmd;
	
	PhoneBook::display_prompt();
	while (1)
	{
		std::cin >> cmd;
		break ;
	}
}

PhoneBook::PhoneBook()
{
	_size = 0;
}

PhoneBook::~PhoneBook()
{
}