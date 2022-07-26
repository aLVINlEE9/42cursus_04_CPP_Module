/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:40:50 by seungsle          #+#    #+#             */
/*   Updated: 2022/07/26 14:58:48 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PhoneBook.hpp"

void	PhoneBook::add_contacts()
{

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
	int	index;
	
	PhoneBook::display_prompt();
	while (1)
	{
		std::cout << "please enter index you want to look (exit to '-1')" << std::endl;
		std::cin >> index;
		if (0 <= index && index < MAX_CAPACITY)
		{
			_contacts[index].display_specific_contact();
		}
		else if (-1 == index)
			break ;
		else
			std::cout << "invalid index" << std::endl;;
	}
}

PhoneBook::PhoneBook()
{
	_size = 0;
}

PhoneBook::~PhoneBook()
{
}