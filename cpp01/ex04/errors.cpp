/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:06:43 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/02 13:41:29 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int		errorNbArgs(int argc)
{
	if (argc < 4)
		std::cout << "Missing arguments" << std::endl;
	else
		std::cout << "Too many arguments" << std::endl;
	return 0;
}