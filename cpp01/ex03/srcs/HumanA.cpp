/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:41:24 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/02 18:29:13 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon )
{
	_name = name;
	_weapon = &weapon;
}

HumanA::~HumanA()
{
	
}

void HumanA::attack( void )
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}