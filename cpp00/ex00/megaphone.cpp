/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:14:24 by seungsle          #+#    #+#             */
/*   Updated: 2022/07/25 19:14:25 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else if (argc >= 2) {
		for (int i = 1; i < argc; ++i)
		{
			for (int j = 0; j < (int)strlen(argv[i]); ++j)
			{
				putchar(toupper(argv[i][j]));
			}
		}
		std::cout << std::endl;
	}
}