/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:40:37 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/02 15:58:55 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <iostream>

class Zombie {
	private:
		std::string	_name;
	public:
		Zombie();
		Zombie( std::string name );
		~Zombie();
		void announce( void );
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );
};

#endif