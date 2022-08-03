/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceString.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:03:01 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/03 16:43:38 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACESTRING_CLASS_H
# define REPLACESTRING_CLASS_H

#include <iostream>
#include <fstream>

class ReplaceString{
	private:
		std::string _s1;
		std::string _s2;
	public:
		ReplaceString();
		~ReplaceString();
		void replaceStr( std::ifstream inFile, std::ofstream outFile, std::string s1, std::string s2 );
};

#endif