/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:51:19 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/02 16:14:56 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

void	Zombie::randomChump( std::string name )
{
	Zombie *newZombie;

	newZombie = Zombie::newZombie(name);
	newZombie->announce();
	delete newZombie;
}