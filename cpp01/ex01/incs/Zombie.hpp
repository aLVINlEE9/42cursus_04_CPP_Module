/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:18:16 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/02 17:01:02 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <iostream>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie();
		Zombie( std::string name );
		~Zombie();
		Zombie* zombieHorde( int N, std::string name );
		void	announce( void );
		void	setName( std::string name );
};

#endif