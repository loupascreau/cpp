/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2022/01/11 07:34:37 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantStack.hpp"

int		main(void)
{
	/****************init MutantStack****************/
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(47);
	mstack.push(12);
	mstack.push(24);

	std::cout << mstack;

	std::cout << "top = " << mstack.top() << " size = " << mstack.size() << std::endl;
	std::cout << "..top() -= 4" << std::endl;
	mstack.top() -= 4;
	std::cout << "top = " << mstack.top() << " size = " << mstack.size() << std::endl;

	mstack.pop();
	std::cout << "..pop().." << std::endl;

	std::cout << "top = " << mstack.top() << " size = " << mstack.size() << std::endl;

	/****************stack from MutantStack******************/

	std::cout << std::endl;
	std::stack<int>		s(mstack);

	std::cout << "stack from MutantStack copie into std::stack : " << std::endl;
	while (!s.empty())
	{
		std::cout << " " << s.top() << std::endl;
		s.pop();
	}
	std::cout << " --" << std::endl;

	/****************MutantStack iterator*******************/

	std::cout << std::endl;
	
	mstack.push(23);
	mstack.push(64);
	
	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();

	std::cout << "stack from begin() iterator : " << std::endl;
	while (it != ite)
	{
		std::cout << " " << *it << std::endl;
		it++;
	}
	std::cout << " --" << std::endl;

	return 0;
}
