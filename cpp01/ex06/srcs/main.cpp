/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:57:33 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/03 17:35:07 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc == 2)
	{
		harl.complainFilter(argv[1]);
	}
	else
	{
		std::cout << "Please use ./harlFilter [ level ]" << std::endl;
		return (1);
	}
	return (0);
}