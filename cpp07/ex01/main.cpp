/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/23 10:58:24 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main(void)
{
	int		int_array[4] = {1, 2, 3, 4};
	char	char_array[5] = {'s', 'a', 'l', 'u', 't'};
	double	double_array[4] = {2.8, 11.0, 4.2, 5.12};

	int		i;

	iter(&int_array, 4, &ftIncrement);
	iter(&char_array, 5, &ftIncrement);
	iter(&double_array, 4, &ftIncrement);

	i = 0;
	while (i < 4)
	{
		std::cout << "int_array[" << i << "] = " << int_array[i] << std::endl;
		i++;
	}
	std::cout << std::endl;
	i = 0;
	while (i < 5)
	{
		std::cout << "char_array[" << i << "] = " << char_array[i] << std::endl;
		i++;
	}
	std::cout << std::endl;
	i = 0;
	while (i < 4)
	{
		std::cout << "double_array[" << i << "] = " << double_array[i] << std::endl;
		i++;
	}
	return 0;
}