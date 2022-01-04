/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2022/01/04 12:52:20 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main(void)
{
	Span						sp = Span(5);

//gerer si le nbr de nombre nest pas identique a la size
	sp.addNumber(63);
/*	sp.addNumber(12);
	sp.addNumber(57);
	sp.addNumber(42);
	sp.addNumber(24);
	sp.addNumber(84);*/

	std::cout << sp << std::endl;
	
	return 0;
}