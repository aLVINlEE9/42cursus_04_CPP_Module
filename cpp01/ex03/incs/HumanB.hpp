/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:41:18 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/02 18:26:24 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;
	public:
		HumanB( std::string name );
		~HumanB();
		void attack( void );
		void setWeapon(Weapon &weapon);
};

#endif