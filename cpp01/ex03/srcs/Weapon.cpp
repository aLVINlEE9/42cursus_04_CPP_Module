/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:41:34 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/02 18:16:51 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Weapon.hpp"

Weapon::Weapon( std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{
	
}

std::string Weapon::getType()
{
	return (_type);
}

void Weapon::setType( std::string type )
{
	_type = type;
}