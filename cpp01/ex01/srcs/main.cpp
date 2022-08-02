/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:25:15 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/02 16:50:58 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

int main() {
	std::string name[] = {"Bob", "Alice", "John", "Andy", "Peter", "Mark"};
	Zombie zombie;
	Zombie *zombies;

	for (int i = 0; i < 6; i++)
	{
		zombies = zombie.zombieHorde(i + 1, name[i]);
		delete [] zombies;
	}
}