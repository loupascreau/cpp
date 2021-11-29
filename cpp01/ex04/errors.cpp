/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:06:43 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/29 11:10:49 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int		errorNbArgs(int argc)
{
	if (argc < 4)
		std::cerr << "Missing arguments" << std::endl;
	else
		std::cerr << "Too many arguments" << std::endl;
	return 0;
}