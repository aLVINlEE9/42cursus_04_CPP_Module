/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:41:22 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/02 18:16:42 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

#include <iostream>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon( std::string type );
		~Weapon();
		std::string getType();
		void setType( std::string type );
};

#endif