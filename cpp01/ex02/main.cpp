/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:11:29 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/02 17:37:33 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string variable = "HI THIS IS BRAIN";
	std::string *stringPTR = &variable;
	std::string &stringREF = variable;
	
	std::cout << "The memory address of the string variable." << std::endl;
	std::cout << "The memory address held by " << stringPTR << std::endl;
	std::cout << "The memory address held by " << &stringREF << std::endl;
	std::cout << "The value of the string variable." << std::endl;
	std::cout << "The value pointed to by " << *stringPTR << std::endl;
	std::cout << "The value pointed to by " << stringREF << std::endl;
}