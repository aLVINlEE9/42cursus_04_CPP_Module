/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:57:54 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/02 16:12:12 by seungsle         ###   ########.fr       */
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
