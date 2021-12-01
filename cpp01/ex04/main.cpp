/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:04:11 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/01 18:01:46 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int		main(int argc, char **argv)
{
	std::ifstream	file;
	Replace			replace;

	if (argc != 4)
		return (errorNbArgs(argc));
	replace.replaceString(file, argv[1], argv[2], argv[3]);
	return 0;
}