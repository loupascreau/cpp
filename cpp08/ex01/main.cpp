/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2022/01/05 11:53:09 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main(void)
{
	/*************addNumber************/

	Span						sp = Span(5);

	std::cout << "Calls to addNumber()" << std::endl;
	sp.addNumber(63);
	sp.addNumber(12);
	sp.addNumber(57);
	sp.addNumber(42);
	sp.addNumber(24);
	sp.addNumber(84);

	std::cout << sp << std::endl;

	/*************Lot of numbers************/

	Span						bigSp = Span(15000);

	std::cout << "Big Span random addNumber()" << std::endl;
	bigSp.setBigSpan();
	std::cout << bigSp << std::endl;

	/************Range iterator*************/

	std::vector<int>			stock;
	Span						spRange(7);

	std::cout << "Adding with range of iterators" << std::endl;
	stock.push_back(15);
	stock.push_back(37);
	stock.push_back(123);
	stock.push_back(-12);
	stock.push_back(52);
	stock.push_back(6);
	stock.push_back(99);
	stock.push_back(18);

	spRange.addByRangeIterator(stock.begin(), stock.end());
	std::cout << spRange << std::endl;

	return 0;
}
