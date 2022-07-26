/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:37:15 by seungsle          #+#    #+#             */
/*   Updated: 2022/07/26 14:53:26 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PhoneBook.hpp"

int main() {
	std::string cmd;
	PhoneBook phoneBook;

	std::cout << "this is phonebook program!" << std::endl;
	while (1) {
		std::cout << "please put command right belowㄱ [ADD, SEARCH, EXIT]" << std::endl;
		std::cin >> cmd;
		if (std::cin.eof() || !cmd.compare("EXIT"))
			break ;
		else if (!cmd.compare("ADD"))
			phoneBook.add_contacts();
		else if (!cmd.compare("SEARCH"))
			phoneBook.search_contact();
		else
			std::cout << "Invalid command" << std::endl;
	}
}