/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:18:59 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/02 17:09:19 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie *newZombies = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		newZombies[i].setName(name);
		newZombies[i].announce();
	}
	return (newZombies);
}