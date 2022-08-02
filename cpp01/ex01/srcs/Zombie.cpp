/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:25:12 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/02 16:47:23 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

Zombie::Zombie()
{
	_name = "Foo";
}

Zombie::Zombie( std::string name )
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name << " destroyed" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name )
{
	_name = name;
}