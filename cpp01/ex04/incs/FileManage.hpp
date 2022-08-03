/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileManage.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:03:03 by seungsle          #+#    #+#             */
/*   Updated: 2022/08/03 16:39:58 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEMANAGE_CLASS_H
# define FILEMANAGE_CLASS_H

#include <iostream>
#include <fstream>

class FileManage{
	private:
		std::ifstream	_inFile;
		std::ofstream	_outFile;
	public:
		FileManage();
		~FileManage();
		bool inFileOpen( std::string fileName );
		bool outFileOpen( std::string fileName );
		void closeFile( void );
		std::ifstream getInfile( void );
		std::ofstream getOutfile ( void );
};

#endif