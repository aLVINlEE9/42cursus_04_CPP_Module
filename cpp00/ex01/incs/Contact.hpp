/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:14:18 by seungsle          #+#    #+#             */
/*   Updated: 2022/07/26 14:24:36 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
		int _index;

	public:
		Contact();
		~Contact();
		void add_contact(std::string firstName, std::string lastName, \
								std::string nickName, std::string phoneNumber, \
								std::string darkestSecret, int index);
		void display_contact(void);
		std::string substr_info(std::string str);
};

#endif