/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:36:08 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/02 12:19:04 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		errorNbArgs(void)
{
	std::cerr << "You need one argument to execute the program" << std::endl;
	return 0;
}

int		main(int argc, char **argv)
{
	Karen		karen;
	
	if (argc != 2)
		return errorNbArgs();
	karen.setIndex(argv[1]);
	karen.getIndex(argv[1], karen);
	return 0;
}