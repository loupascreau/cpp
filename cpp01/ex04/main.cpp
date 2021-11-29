/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:04:11 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/29 16:03:09 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int		main(int argc, char **argv)
{
	std::fstream	file;
	std::string		line;
	std::string		s1;
	int				found;

	if (argc != 4)
		return errorNbArgs(argc);
	s1 = argv[2];
	file.open(argv[1], std::fstream::in | std::fstream::out);
	if (file.is_open())
	{
		std::cout << "open with success" << std::endl;
		while (file)
		{
			getline(file, line);
			found = line.find(s1);
			if (found != std::string::npos)
			{
				std::cout << "found at " << found << " " << &line[found] << std::endl;
			}
		}
		file.close();
	}
	else
		std::cout << "fail to open" << std::endl;
	return 0;
}



std   stdstd