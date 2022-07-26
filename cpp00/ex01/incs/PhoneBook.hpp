/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:14:18 by seungsle          #+#    #+#             */
/*   Updated: 2022/07/26 13:57:13 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.hpp"
#include <iostream>

#define MAX_CAPACITY 8

class PhoneBook {
	private:
		Contact _contacts[MAX_CAPACITY];
		std::string _info[5];
		int _size;
		enum _infoIndex {
			firstName = 0,
			lastName,
			nickName,
			phoneNumber,
			darkestSecret
		};
	public:
		PhoneBook();
		~PhoneBook();
		void add_contacts(void);
		void display_prompt(void);
		void search_contact(void);
};

#endif