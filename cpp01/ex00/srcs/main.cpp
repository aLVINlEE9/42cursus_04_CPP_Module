/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:51:14 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/02 16:13:48 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

int main() {
	std::string name[] = {"Bob", "Alice", "John", "Andy", "Peter", "Mark"};
	Zombie zombie;

	for (int i = 0; i < 6; i++)
		zombie.randomChump(name[i]);
	zombie.announce();
}