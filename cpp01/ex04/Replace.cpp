/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:31:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/01 18:03:26 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include "includes.h"

Replace::Replace()
{

}

void	manageLines(std::ifstream &file, std::ofstream &newFile, std::string s1, std::string s2)
{
	std::string	line;
	int			i;

	while (getline(file, line))
	{
		i = 0;
		while (line[i])
		{
			if (line.compare(i, s1.size(), s1) == 0)
			{
				if (s1.compare(s2) == 0)
					break ;
				line.erase(i, s1.length());
				line.insert(i, s2);
				i += s2.length() - 1;
			}
			i++;
		}
		newFile << line;
		if (!file.eof())
			newFile << std::endl;
	}
}

void	getFileName(char (&newFilename)[1024], char *str)
{
	std::string	filename;
	std::string	tmp;

	filename = str;
	tmp = filename + ".replace";
	tmp.copy(newFilename, tmp.size() + 1);
	newFilename[tmp.size()] = '\0';
}

void	Replace::replaceString(std::ifstream &file, char *fileName, std::string s1, std::string s2)
{
	std::ofstream	newFile;
	char			newFilename[1024];
	
	getFileName(newFilename, fileName);
	file.open(fileName);
	if (file.is_open())
	{
		newFile.open(newFilename);
		if (newFile.is_open())
		{
			manageLines(file, newFile, s1, s2);
			newFile.close();
		}
		file.close();
	}
}

Replace::~Replace()
{
	
}