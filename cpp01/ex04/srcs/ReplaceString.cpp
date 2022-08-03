/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceString.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:02:58 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/03 16:40:45 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ReplaceString.hpp"

ReplaceString::ReplaceString()
{
	
}

ReplaceString::~ReplaceString()
{
	
}

void ReplaceString::replaceStr( std::ifstream inFile, std::ofstream outFile, std::string s1, std::string s2 )
{
	std::string line;
	std::size_t pos;

	_s1 = s1;
	_s2 = s2;
	while (getline(inFile, line))
	{
		while ((pos = line.find(_s1)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, _s2);
		}
		outFile << line << std::endl;
	}
}
