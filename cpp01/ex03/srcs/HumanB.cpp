/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:41:27 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/02 18:31:51 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/HumanB.hpp"

HumanB::HumanB( std::string name )
{
	_name = name;
}

HumanB::~HumanB()
{
	
}

void HumanB::attack( void )
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon( Weapon &weapon )
{
	_weapon = &weapon;
}