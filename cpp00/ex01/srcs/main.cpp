/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:37:15 by seungsle          #+#    #+#             */
/*   Updated: 2022/07/25 20:31:04 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PhoneBook.hpp"

int main() {
	std::string cmd;
	PhoneBook phoneBook;

	while (1) {
		std::cin >> cmd;
		if (std::cin.eof() || !cmd.compare("EXIT"))
			break ;
		else if (!cmd.compare("ADD"))
			phoneBook.add_contact();
		else if (!cmd.compare("SEARCH"))
			phoneBook.search_contact();
		else
			std::cout << "Invalid command" << std::endl;
	}
}