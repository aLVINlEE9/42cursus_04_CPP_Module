/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:35:37 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/03 16:41:55 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/FileManage.hpp"
#include "../incs/ReplaceString.hpp"

int main(int argc, char **argv)
{
	FileManage	fileManage;
	ReplaceString replaceString;

	if (argc != 4)
	{
		std::cout << "please input [filename] [s1] [s2]" << std::endl;
		return (1);
	}
	else
	{
		if (fileManage.inFileOpen(argv[1]) && fileManage.outFileOpen(argv[1]))
		{
			replaceString.replaceStr(fileManage.getInfile(), fileManage.getOutfile(), argv[2], argv[3]);
			fileManage.closeFile();
		}
		else
			return (1);
	}
	return (0);
}
