/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:41:14 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/02 18:25:32 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon *_weapon;
	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA();
		void attack( void );
};

#endif