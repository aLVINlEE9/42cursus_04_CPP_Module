/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:40:50 by seungsle          #+#    #+#             */
/*   Updated: 2022/07/25 21:50:03 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PhoneBook.hpp"

void	PhoneBook::add_contact()
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
		std::cout << std::endl;
	}
	_contacts[_size % 8] = Contact(_info[0], _info[1], _info[2], _info[3], _info[4], _size % 8);
	_size++;
}

void	PhoneBook::display_prompt()
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < cnt && i < MaxIndex; i++)
		this->contacts[i].display_search_header();
	std::cout << "|-------------------------------------------|" << std::endl;
}

void	PhoneBook::search_contact()
{

}

PhoneBook::PhoneBook()
{
	_size = 0;
}

PhoneBook::~PhoneBook()
{
}