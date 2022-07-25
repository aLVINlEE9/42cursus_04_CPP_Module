/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:40:48 by seungsle          #+#    #+#             */
/*   Updated: 2022/07/25 21:53:06 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Contact.hpp"

void	Contact::display_contact()
{
	std::cout << "|" << std::setw(10) << _index;
	std::cout << "|" << std::setw(10) << 
}

Contact::Contact(std::string firstName, std::string lastName, \
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

Contact::~Contact()
{
}