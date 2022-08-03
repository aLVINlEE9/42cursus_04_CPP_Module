/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileManage.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:02:55 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/03 16:39:48 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/FileManage.hpp"

FileManage::FileManage()
{

}

FileManage::~FileManage()
{
	
}

bool FileManage::inFileOpen( std::string fileName )
{
	_inFile.open(fileName, std::ifstream::in);
	if (_inFile.is_open())
		return (true);
	else
	{
		std::cout << "Fail to open file." << std::endl;
		return (false);
	}
}

bool FileManage::outFileOpen( std::string fileName )
{
	_outFile.open(fileName.append(".replace"), std::ofstream::out | std::ofstream::trunc);
	if (_outFile.is_open())
		return (true);
	else
	{
		std::cout << "Fail to open file." << std::endl;
		return (false);
	}
}

void FileManage::closeFile()
{
	_inFile.close();
	_outFile.close();
}

std::ifstream FileManage::getInfile( void )
{
	return (_inFile);
}

std::ofstream FileManage::getOutfile ( void )
{
	return (_outFile);
}